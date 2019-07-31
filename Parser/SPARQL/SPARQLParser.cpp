
// Generated from SPARQL.g4 by ANTLR 4.7.2


#include "SPARQLListener.h"
#include "SPARQLVisitor.h"

#include "SPARQLParser.h"


using namespace antlrcpp;
using namespace antlr4;

SPARQLParser::SPARQLParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SPARQLParser::~SPARQLParser() {
  delete _interpreter;
}

std::string SPARQLParser::getGrammarFileName() const {
  return "SPARQL.g4";
}

const std::vector<std::string>& SPARQLParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SPARQLParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- EntryContext ------------------------------------------------------------------

SPARQLParser::EntryContext::EntryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::QueryUnitContext* SPARQLParser::EntryContext::queryUnit() {
  return getRuleContext<SPARQLParser::QueryUnitContext>(0);
}

SPARQLParser::UpdateUnitContext* SPARQLParser::EntryContext::updateUnit() {
  return getRuleContext<SPARQLParser::UpdateUnitContext>(0);
}

tree::TerminalNode* SPARQLParser::EntryContext::EOF() {
  return getToken(SPARQLParser::EOF, 0);
}


size_t SPARQLParser::EntryContext::getRuleIndex() const {
  return SPARQLParser::RuleEntry;
}

void SPARQLParser::EntryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEntry(this);
}

void SPARQLParser::EntryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEntry(this);
}


antlrcpp::Any SPARQLParser::EntryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitEntry(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::EntryContext* SPARQLParser::entry() {
  EntryContext *_localctx = _tracker.createInstance<EntryContext>(_ctx, getState());
  enterRule(_localctx, 0, SPARQLParser::RuleEntry);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(304);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(300);
      queryUnit();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(301);
      updateUnit();
      setState(302);
      match(SPARQLParser::EOF);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryUnitContext ------------------------------------------------------------------

SPARQLParser::QueryUnitContext::QueryUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::QueryContext* SPARQLParser::QueryUnitContext::query() {
  return getRuleContext<SPARQLParser::QueryContext>(0);
}


size_t SPARQLParser::QueryUnitContext::getRuleIndex() const {
  return SPARQLParser::RuleQueryUnit;
}

void SPARQLParser::QueryUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQueryUnit(this);
}

void SPARQLParser::QueryUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQueryUnit(this);
}


antlrcpp::Any SPARQLParser::QueryUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitQueryUnit(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::QueryUnitContext* SPARQLParser::queryUnit() {
  QueryUnitContext *_localctx = _tracker.createInstance<QueryUnitContext>(_ctx, getState());
  enterRule(_localctx, 2, SPARQLParser::RuleQueryUnit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    query();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QueryContext ------------------------------------------------------------------

SPARQLParser::QueryContext::QueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PrologueContext* SPARQLParser::QueryContext::prologue() {
  return getRuleContext<SPARQLParser::PrologueContext>(0);
}

SPARQLParser::ValuesClauseContext* SPARQLParser::QueryContext::valuesClause() {
  return getRuleContext<SPARQLParser::ValuesClauseContext>(0);
}

SPARQLParser::SelectqueryContext* SPARQLParser::QueryContext::selectquery() {
  return getRuleContext<SPARQLParser::SelectqueryContext>(0);
}

SPARQLParser::ConstructqueryContext* SPARQLParser::QueryContext::constructquery() {
  return getRuleContext<SPARQLParser::ConstructqueryContext>(0);
}

SPARQLParser::DescribequeryContext* SPARQLParser::QueryContext::describequery() {
  return getRuleContext<SPARQLParser::DescribequeryContext>(0);
}

SPARQLParser::AskqueryContext* SPARQLParser::QueryContext::askquery() {
  return getRuleContext<SPARQLParser::AskqueryContext>(0);
}


size_t SPARQLParser::QueryContext::getRuleIndex() const {
  return SPARQLParser::RuleQuery;
}

void SPARQLParser::QueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuery(this);
}

void SPARQLParser::QueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuery(this);
}


antlrcpp::Any SPARQLParser::QueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitQuery(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::QueryContext* SPARQLParser::query() {
  QueryContext *_localctx = _tracker.createInstance<QueryContext>(_ctx, getState());
  enterRule(_localctx, 4, SPARQLParser::RuleQuery);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    prologue();
    setState(313);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_SELECT: {
        setState(309);
        selectquery();
        break;
      }

      case SPARQLParser::K_CONSTRUCT: {
        setState(310);
        constructquery();
        break;
      }

      case SPARQLParser::K_DESCRIBE: {
        setState(311);
        describequery();
        break;
      }

      case SPARQLParser::K_ASK: {
        setState(312);
        askquery();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(315);
    valuesClause();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdateUnitContext ------------------------------------------------------------------

SPARQLParser::UpdateUnitContext::UpdateUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::UpdateContext* SPARQLParser::UpdateUnitContext::update() {
  return getRuleContext<SPARQLParser::UpdateContext>(0);
}


size_t SPARQLParser::UpdateUnitContext::getRuleIndex() const {
  return SPARQLParser::RuleUpdateUnit;
}

void SPARQLParser::UpdateUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdateUnit(this);
}

void SPARQLParser::UpdateUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdateUnit(this);
}


antlrcpp::Any SPARQLParser::UpdateUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitUpdateUnit(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::UpdateUnitContext* SPARQLParser::updateUnit() {
  UpdateUnitContext *_localctx = _tracker.createInstance<UpdateUnitContext>(_ctx, getState());
  enterRule(_localctx, 6, SPARQLParser::RuleUpdateUnit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    update();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrologueContext ------------------------------------------------------------------

SPARQLParser::PrologueContext::PrologueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::BaseDeclContext *> SPARQLParser::PrologueContext::baseDecl() {
  return getRuleContexts<SPARQLParser::BaseDeclContext>();
}

SPARQLParser::BaseDeclContext* SPARQLParser::PrologueContext::baseDecl(size_t i) {
  return getRuleContext<SPARQLParser::BaseDeclContext>(i);
}

std::vector<SPARQLParser::PrefixDeclContext *> SPARQLParser::PrologueContext::prefixDecl() {
  return getRuleContexts<SPARQLParser::PrefixDeclContext>();
}

SPARQLParser::PrefixDeclContext* SPARQLParser::PrologueContext::prefixDecl(size_t i) {
  return getRuleContext<SPARQLParser::PrefixDeclContext>(i);
}


size_t SPARQLParser::PrologueContext::getRuleIndex() const {
  return SPARQLParser::RulePrologue;
}

void SPARQLParser::PrologueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrologue(this);
}

void SPARQLParser::PrologueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrologue(this);
}


antlrcpp::Any SPARQLParser::PrologueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPrologue(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PrologueContext* SPARQLParser::prologue() {
  PrologueContext *_localctx = _tracker.createInstance<PrologueContext>(_ctx, getState());
  enterRule(_localctx, 8, SPARQLParser::RulePrologue);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::K_BASE

    || _la == SPARQLParser::K_PREFIX) {
      setState(321);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SPARQLParser::K_BASE: {
          setState(319);
          baseDecl();
          break;
        }

        case SPARQLParser::K_PREFIX: {
          setState(320);
          prefixDecl();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(325);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseDeclContext ------------------------------------------------------------------

SPARQLParser::BaseDeclContext::BaseDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::BaseDeclContext::K_BASE() {
  return getToken(SPARQLParser::K_BASE, 0);
}

tree::TerminalNode* SPARQLParser::BaseDeclContext::IRIREF() {
  return getToken(SPARQLParser::IRIREF, 0);
}


size_t SPARQLParser::BaseDeclContext::getRuleIndex() const {
  return SPARQLParser::RuleBaseDecl;
}

void SPARQLParser::BaseDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBaseDecl(this);
}

void SPARQLParser::BaseDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBaseDecl(this);
}


antlrcpp::Any SPARQLParser::BaseDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitBaseDecl(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::BaseDeclContext* SPARQLParser::baseDecl() {
  BaseDeclContext *_localctx = _tracker.createInstance<BaseDeclContext>(_ctx, getState());
  enterRule(_localctx, 10, SPARQLParser::RuleBaseDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    match(SPARQLParser::K_BASE);
    setState(327);
    match(SPARQLParser::IRIREF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixDeclContext ------------------------------------------------------------------

SPARQLParser::PrefixDeclContext::PrefixDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::PrefixDeclContext::K_PREFIX() {
  return getToken(SPARQLParser::K_PREFIX, 0);
}

tree::TerminalNode* SPARQLParser::PrefixDeclContext::PNAME_NS() {
  return getToken(SPARQLParser::PNAME_NS, 0);
}

tree::TerminalNode* SPARQLParser::PrefixDeclContext::IRIREF() {
  return getToken(SPARQLParser::IRIREF, 0);
}


size_t SPARQLParser::PrefixDeclContext::getRuleIndex() const {
  return SPARQLParser::RulePrefixDecl;
}

void SPARQLParser::PrefixDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixDecl(this);
}

void SPARQLParser::PrefixDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixDecl(this);
}


antlrcpp::Any SPARQLParser::PrefixDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPrefixDecl(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PrefixDeclContext* SPARQLParser::prefixDecl() {
  PrefixDeclContext *_localctx = _tracker.createInstance<PrefixDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, SPARQLParser::RulePrefixDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    match(SPARQLParser::K_PREFIX);
    setState(330);
    match(SPARQLParser::PNAME_NS);
    setState(331);
    match(SPARQLParser::IRIREF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectqueryContext ------------------------------------------------------------------

SPARQLParser::SelectqueryContext::SelectqueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::SelectClauseContext* SPARQLParser::SelectqueryContext::selectClause() {
  return getRuleContext<SPARQLParser::SelectClauseContext>(0);
}

SPARQLParser::WhereClauseContext* SPARQLParser::SelectqueryContext::whereClause() {
  return getRuleContext<SPARQLParser::WhereClauseContext>(0);
}

SPARQLParser::SolutionModifierContext* SPARQLParser::SelectqueryContext::solutionModifier() {
  return getRuleContext<SPARQLParser::SolutionModifierContext>(0);
}

std::vector<SPARQLParser::DatasetClauseContext *> SPARQLParser::SelectqueryContext::datasetClause() {
  return getRuleContexts<SPARQLParser::DatasetClauseContext>();
}

SPARQLParser::DatasetClauseContext* SPARQLParser::SelectqueryContext::datasetClause(size_t i) {
  return getRuleContext<SPARQLParser::DatasetClauseContext>(i);
}


size_t SPARQLParser::SelectqueryContext::getRuleIndex() const {
  return SPARQLParser::RuleSelectquery;
}

void SPARQLParser::SelectqueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectquery(this);
}

void SPARQLParser::SelectqueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectquery(this);
}


antlrcpp::Any SPARQLParser::SelectqueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitSelectquery(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::SelectqueryContext* SPARQLParser::selectquery() {
  SelectqueryContext *_localctx = _tracker.createInstance<SelectqueryContext>(_ctx, getState());
  enterRule(_localctx, 14, SPARQLParser::RuleSelectquery);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(333);
    selectClause();
    setState(337);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::K_FROM) {
      setState(334);
      datasetClause();
      setState(339);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(340);
    whereClause();
    setState(341);
    solutionModifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubSelectContext ------------------------------------------------------------------

SPARQLParser::SubSelectContext::SubSelectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::SelectClauseContext* SPARQLParser::SubSelectContext::selectClause() {
  return getRuleContext<SPARQLParser::SelectClauseContext>(0);
}

SPARQLParser::WhereClauseContext* SPARQLParser::SubSelectContext::whereClause() {
  return getRuleContext<SPARQLParser::WhereClauseContext>(0);
}

SPARQLParser::SolutionModifierContext* SPARQLParser::SubSelectContext::solutionModifier() {
  return getRuleContext<SPARQLParser::SolutionModifierContext>(0);
}

SPARQLParser::ValuesClauseContext* SPARQLParser::SubSelectContext::valuesClause() {
  return getRuleContext<SPARQLParser::ValuesClauseContext>(0);
}


size_t SPARQLParser::SubSelectContext::getRuleIndex() const {
  return SPARQLParser::RuleSubSelect;
}

void SPARQLParser::SubSelectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubSelect(this);
}

void SPARQLParser::SubSelectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubSelect(this);
}


antlrcpp::Any SPARQLParser::SubSelectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitSubSelect(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::SubSelectContext* SPARQLParser::subSelect() {
  SubSelectContext *_localctx = _tracker.createInstance<SubSelectContext>(_ctx, getState());
  enterRule(_localctx, 16, SPARQLParser::RuleSubSelect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    selectClause();
    setState(344);
    whereClause();
    setState(345);
    solutionModifier();
    setState(346);
    valuesClause();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectClauseContext ------------------------------------------------------------------

SPARQLParser::SelectClauseContext::SelectClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::SelectClauseContext::K_SELECT() {
  return getToken(SPARQLParser::K_SELECT, 0);
}

tree::TerminalNode* SPARQLParser::SelectClauseContext::K_DISTINCT() {
  return getToken(SPARQLParser::K_DISTINCT, 0);
}

tree::TerminalNode* SPARQLParser::SelectClauseContext::K_REDUCED() {
  return getToken(SPARQLParser::K_REDUCED, 0);
}

std::vector<SPARQLParser::VarContext *> SPARQLParser::SelectClauseContext::var() {
  return getRuleContexts<SPARQLParser::VarContext>();
}

SPARQLParser::VarContext* SPARQLParser::SelectClauseContext::var(size_t i) {
  return getRuleContext<SPARQLParser::VarContext>(i);
}

std::vector<SPARQLParser::ExpressionAsVarContext *> SPARQLParser::SelectClauseContext::expressionAsVar() {
  return getRuleContexts<SPARQLParser::ExpressionAsVarContext>();
}

SPARQLParser::ExpressionAsVarContext* SPARQLParser::SelectClauseContext::expressionAsVar(size_t i) {
  return getRuleContext<SPARQLParser::ExpressionAsVarContext>(i);
}


size_t SPARQLParser::SelectClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleSelectClause;
}

void SPARQLParser::SelectClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectClause(this);
}

void SPARQLParser::SelectClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectClause(this);
}


antlrcpp::Any SPARQLParser::SelectClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitSelectClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::SelectClauseContext* SPARQLParser::selectClause() {
  SelectClauseContext *_localctx = _tracker.createInstance<SelectClauseContext>(_ctx, getState());
  enterRule(_localctx, 18, SPARQLParser::RuleSelectClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    match(SPARQLParser::K_SELECT);
    setState(350);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_DISTINCT

    || _la == SPARQLParser::K_REDUCED) {
      setState(349);
      _la = _input->LA(1);
      if (!(_la == SPARQLParser::K_DISTINCT

      || _la == SPARQLParser::K_REDUCED)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(359);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__1:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2: {
        setState(354); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(354);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SPARQLParser::VAR1:
            case SPARQLParser::VAR2: {
              setState(352);
              var();
              break;
            }

            case SPARQLParser::T__1: {
              setState(353);
              expressionAsVar();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(356); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == SPARQLParser::T__1 || _la == SPARQLParser::VAR1

        || _la == SPARQLParser::VAR2);
        break;
      }

      case SPARQLParser::T__0: {
        setState(358);
        match(SPARQLParser::T__0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionAsVarContext ------------------------------------------------------------------

SPARQLParser::ExpressionAsVarContext::ExpressionAsVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::ExpressionContext* SPARQLParser::ExpressionAsVarContext::expression() {
  return getRuleContext<SPARQLParser::ExpressionContext>(0);
}

tree::TerminalNode* SPARQLParser::ExpressionAsVarContext::K_AS() {
  return getToken(SPARQLParser::K_AS, 0);
}

SPARQLParser::VarContext* SPARQLParser::ExpressionAsVarContext::var() {
  return getRuleContext<SPARQLParser::VarContext>(0);
}


size_t SPARQLParser::ExpressionAsVarContext::getRuleIndex() const {
  return SPARQLParser::RuleExpressionAsVar;
}

void SPARQLParser::ExpressionAsVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionAsVar(this);
}

void SPARQLParser::ExpressionAsVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionAsVar(this);
}


antlrcpp::Any SPARQLParser::ExpressionAsVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitExpressionAsVar(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ExpressionAsVarContext* SPARQLParser::expressionAsVar() {
  ExpressionAsVarContext *_localctx = _tracker.createInstance<ExpressionAsVarContext>(_ctx, getState());
  enterRule(_localctx, 20, SPARQLParser::RuleExpressionAsVar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    match(SPARQLParser::T__1);
    setState(362);
    expression();
    setState(363);
    match(SPARQLParser::K_AS);
    setState(364);
    var();
    setState(365);
    match(SPARQLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructqueryContext ------------------------------------------------------------------

SPARQLParser::ConstructqueryContext::ConstructqueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::ConstructqueryContext::K_CONSTRUCT() {
  return getToken(SPARQLParser::K_CONSTRUCT, 0);
}

SPARQLParser::ConstructTemplateContext* SPARQLParser::ConstructqueryContext::constructTemplate() {
  return getRuleContext<SPARQLParser::ConstructTemplateContext>(0);
}

SPARQLParser::WhereClauseContext* SPARQLParser::ConstructqueryContext::whereClause() {
  return getRuleContext<SPARQLParser::WhereClauseContext>(0);
}

SPARQLParser::SolutionModifierContext* SPARQLParser::ConstructqueryContext::solutionModifier() {
  return getRuleContext<SPARQLParser::SolutionModifierContext>(0);
}

tree::TerminalNode* SPARQLParser::ConstructqueryContext::K_WHERE() {
  return getToken(SPARQLParser::K_WHERE, 0);
}

std::vector<SPARQLParser::DatasetClauseContext *> SPARQLParser::ConstructqueryContext::datasetClause() {
  return getRuleContexts<SPARQLParser::DatasetClauseContext>();
}

SPARQLParser::DatasetClauseContext* SPARQLParser::ConstructqueryContext::datasetClause(size_t i) {
  return getRuleContext<SPARQLParser::DatasetClauseContext>(i);
}

SPARQLParser::TriplesTemplateContext* SPARQLParser::ConstructqueryContext::triplesTemplate() {
  return getRuleContext<SPARQLParser::TriplesTemplateContext>(0);
}


size_t SPARQLParser::ConstructqueryContext::getRuleIndex() const {
  return SPARQLParser::RuleConstructquery;
}

void SPARQLParser::ConstructqueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructquery(this);
}

void SPARQLParser::ConstructqueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructquery(this);
}


antlrcpp::Any SPARQLParser::ConstructqueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitConstructquery(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ConstructqueryContext* SPARQLParser::constructquery() {
  ConstructqueryContext *_localctx = _tracker.createInstance<ConstructqueryContext>(_ctx, getState());
  enterRule(_localctx, 22, SPARQLParser::RuleConstructquery);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(367);
    match(SPARQLParser::K_CONSTRUCT);
    setState(391);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__3: {
        setState(368);
        constructTemplate();
        setState(372);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SPARQLParser::K_FROM) {
          setState(369);
          datasetClause();
          setState(374);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(375);
        whereClause();
        setState(376);
        solutionModifier();
        break;
      }

      case SPARQLParser::K_WHERE:
      case SPARQLParser::K_FROM: {
        setState(381);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SPARQLParser::K_FROM) {
          setState(378);
          datasetClause();
          setState(383);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(384);
        match(SPARQLParser::K_WHERE);
        setState(385);
        match(SPARQLParser::T__3);
        setState(387);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
          | (1ULL << SPARQLParser::T__16)
          | (1ULL << SPARQLParser::T__28)
          | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
          | (1ULL << (SPARQLParser::PNAME_NS - 141))
          | (1ULL << (SPARQLParser::PNAME_LN - 141))
          | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
          | (1ULL << (SPARQLParser::VAR1 - 141))
          | (1ULL << (SPARQLParser::VAR2 - 141))
          | (1ULL << (SPARQLParser::INTEGER - 141))
          | (1ULL << (SPARQLParser::DECIMAL - 141))
          | (1ULL << (SPARQLParser::DOUBLE - 141))
          | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
          | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
          | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
          | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
          | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
          | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
          | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
          | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
          | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
          | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
          | (1ULL << (SPARQLParser::NIL - 141))
          | (1ULL << (SPARQLParser::ANON - 141)))) != 0)) {
          setState(386);
          triplesTemplate();
        }
        setState(389);
        match(SPARQLParser::T__4);
        setState(390);
        solutionModifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DescribequeryContext ------------------------------------------------------------------

SPARQLParser::DescribequeryContext::DescribequeryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::DescribequeryContext::K_DESCRIBE() {
  return getToken(SPARQLParser::K_DESCRIBE, 0);
}

SPARQLParser::SolutionModifierContext* SPARQLParser::DescribequeryContext::solutionModifier() {
  return getRuleContext<SPARQLParser::SolutionModifierContext>(0);
}

std::vector<SPARQLParser::DatasetClauseContext *> SPARQLParser::DescribequeryContext::datasetClause() {
  return getRuleContexts<SPARQLParser::DatasetClauseContext>();
}

SPARQLParser::DatasetClauseContext* SPARQLParser::DescribequeryContext::datasetClause(size_t i) {
  return getRuleContext<SPARQLParser::DatasetClauseContext>(i);
}

SPARQLParser::WhereClauseContext* SPARQLParser::DescribequeryContext::whereClause() {
  return getRuleContext<SPARQLParser::WhereClauseContext>(0);
}

std::vector<SPARQLParser::VarOrIriContext *> SPARQLParser::DescribequeryContext::varOrIri() {
  return getRuleContexts<SPARQLParser::VarOrIriContext>();
}

SPARQLParser::VarOrIriContext* SPARQLParser::DescribequeryContext::varOrIri(size_t i) {
  return getRuleContext<SPARQLParser::VarOrIriContext>(i);
}


size_t SPARQLParser::DescribequeryContext::getRuleIndex() const {
  return SPARQLParser::RuleDescribequery;
}

void SPARQLParser::DescribequeryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDescribequery(this);
}

void SPARQLParser::DescribequeryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDescribequery(this);
}


antlrcpp::Any SPARQLParser::DescribequeryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDescribequery(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::DescribequeryContext* SPARQLParser::describequery() {
  DescribequeryContext *_localctx = _tracker.createInstance<DescribequeryContext>(_ctx, getState());
  enterRule(_localctx, 24, SPARQLParser::RuleDescribequery);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(393);
    match(SPARQLParser::K_DESCRIBE);
    setState(400);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2: {
        setState(395); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(394);
          varOrIri();
          setState(397); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (((((_la - 141) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
          | (1ULL << (SPARQLParser::PNAME_NS - 141))
          | (1ULL << (SPARQLParser::PNAME_LN - 141))
          | (1ULL << (SPARQLParser::VAR1 - 141))
          | (1ULL << (SPARQLParser::VAR2 - 141)))) != 0));
        break;
      }

      case SPARQLParser::T__0: {
        setState(399);
        match(SPARQLParser::T__0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(405);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::K_FROM) {
      setState(402);
      datasetClause();
      setState(407);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(409);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::T__3 || _la == SPARQLParser::K_WHERE) {
      setState(408);
      whereClause();
    }
    setState(411);
    solutionModifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AskqueryContext ------------------------------------------------------------------

SPARQLParser::AskqueryContext::AskqueryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::AskqueryContext::K_ASK() {
  return getToken(SPARQLParser::K_ASK, 0);
}

SPARQLParser::WhereClauseContext* SPARQLParser::AskqueryContext::whereClause() {
  return getRuleContext<SPARQLParser::WhereClauseContext>(0);
}

SPARQLParser::SolutionModifierContext* SPARQLParser::AskqueryContext::solutionModifier() {
  return getRuleContext<SPARQLParser::SolutionModifierContext>(0);
}

std::vector<SPARQLParser::DatasetClauseContext *> SPARQLParser::AskqueryContext::datasetClause() {
  return getRuleContexts<SPARQLParser::DatasetClauseContext>();
}

SPARQLParser::DatasetClauseContext* SPARQLParser::AskqueryContext::datasetClause(size_t i) {
  return getRuleContext<SPARQLParser::DatasetClauseContext>(i);
}


size_t SPARQLParser::AskqueryContext::getRuleIndex() const {
  return SPARQLParser::RuleAskquery;
}

void SPARQLParser::AskqueryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAskquery(this);
}

void SPARQLParser::AskqueryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAskquery(this);
}


antlrcpp::Any SPARQLParser::AskqueryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitAskquery(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::AskqueryContext* SPARQLParser::askquery() {
  AskqueryContext *_localctx = _tracker.createInstance<AskqueryContext>(_ctx, getState());
  enterRule(_localctx, 26, SPARQLParser::RuleAskquery);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
    match(SPARQLParser::K_ASK);
    setState(417);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::K_FROM) {
      setState(414);
      datasetClause();
      setState(419);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(420);
    whereClause();
    setState(421);
    solutionModifier();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DatasetClauseContext ------------------------------------------------------------------

SPARQLParser::DatasetClauseContext::DatasetClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::DatasetClauseContext::K_FROM() {
  return getToken(SPARQLParser::K_FROM, 0);
}

SPARQLParser::DefaultGraphClauseContext* SPARQLParser::DatasetClauseContext::defaultGraphClause() {
  return getRuleContext<SPARQLParser::DefaultGraphClauseContext>(0);
}

SPARQLParser::NamedGraphClauseContext* SPARQLParser::DatasetClauseContext::namedGraphClause() {
  return getRuleContext<SPARQLParser::NamedGraphClauseContext>(0);
}


size_t SPARQLParser::DatasetClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleDatasetClause;
}

void SPARQLParser::DatasetClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDatasetClause(this);
}

void SPARQLParser::DatasetClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDatasetClause(this);
}


antlrcpp::Any SPARQLParser::DatasetClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDatasetClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::DatasetClauseContext* SPARQLParser::datasetClause() {
  DatasetClauseContext *_localctx = _tracker.createInstance<DatasetClauseContext>(_ctx, getState());
  enterRule(_localctx, 28, SPARQLParser::RuleDatasetClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    match(SPARQLParser::K_FROM);
    setState(426);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        setState(424);
        defaultGraphClause();
        break;
      }

      case SPARQLParser::K_NAMED: {
        setState(425);
        namedGraphClause();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultGraphClauseContext ------------------------------------------------------------------

SPARQLParser::DefaultGraphClauseContext::DefaultGraphClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::SourceSelectorContext* SPARQLParser::DefaultGraphClauseContext::sourceSelector() {
  return getRuleContext<SPARQLParser::SourceSelectorContext>(0);
}


size_t SPARQLParser::DefaultGraphClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleDefaultGraphClause;
}

void SPARQLParser::DefaultGraphClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefaultGraphClause(this);
}

void SPARQLParser::DefaultGraphClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefaultGraphClause(this);
}


antlrcpp::Any SPARQLParser::DefaultGraphClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDefaultGraphClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::DefaultGraphClauseContext* SPARQLParser::defaultGraphClause() {
  DefaultGraphClauseContext *_localctx = _tracker.createInstance<DefaultGraphClauseContext>(_ctx, getState());
  enterRule(_localctx, 30, SPARQLParser::RuleDefaultGraphClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    sourceSelector();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamedGraphClauseContext ------------------------------------------------------------------

SPARQLParser::NamedGraphClauseContext::NamedGraphClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::NamedGraphClauseContext::K_NAMED() {
  return getToken(SPARQLParser::K_NAMED, 0);
}

SPARQLParser::SourceSelectorContext* SPARQLParser::NamedGraphClauseContext::sourceSelector() {
  return getRuleContext<SPARQLParser::SourceSelectorContext>(0);
}


size_t SPARQLParser::NamedGraphClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleNamedGraphClause;
}

void SPARQLParser::NamedGraphClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamedGraphClause(this);
}

void SPARQLParser::NamedGraphClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamedGraphClause(this);
}


antlrcpp::Any SPARQLParser::NamedGraphClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitNamedGraphClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::NamedGraphClauseContext* SPARQLParser::namedGraphClause() {
  NamedGraphClauseContext *_localctx = _tracker.createInstance<NamedGraphClauseContext>(_ctx, getState());
  enterRule(_localctx, 32, SPARQLParser::RuleNamedGraphClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    match(SPARQLParser::K_NAMED);
    setState(431);
    sourceSelector();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SourceSelectorContext ------------------------------------------------------------------

SPARQLParser::SourceSelectorContext::SourceSelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::IriContext* SPARQLParser::SourceSelectorContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}


size_t SPARQLParser::SourceSelectorContext::getRuleIndex() const {
  return SPARQLParser::RuleSourceSelector;
}

void SPARQLParser::SourceSelectorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSourceSelector(this);
}

void SPARQLParser::SourceSelectorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSourceSelector(this);
}


antlrcpp::Any SPARQLParser::SourceSelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitSourceSelector(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::SourceSelectorContext* SPARQLParser::sourceSelector() {
  SourceSelectorContext *_localctx = _tracker.createInstance<SourceSelectorContext>(_ctx, getState());
  enterRule(_localctx, 34, SPARQLParser::RuleSourceSelector);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(433);
    iri();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhereClauseContext ------------------------------------------------------------------

SPARQLParser::WhereClauseContext::WhereClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::GroupGraphPatternContext* SPARQLParser::WhereClauseContext::groupGraphPattern() {
  return getRuleContext<SPARQLParser::GroupGraphPatternContext>(0);
}

tree::TerminalNode* SPARQLParser::WhereClauseContext::K_WHERE() {
  return getToken(SPARQLParser::K_WHERE, 0);
}


size_t SPARQLParser::WhereClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleWhereClause;
}

void SPARQLParser::WhereClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhereClause(this);
}

void SPARQLParser::WhereClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhereClause(this);
}


antlrcpp::Any SPARQLParser::WhereClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitWhereClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::WhereClauseContext* SPARQLParser::whereClause() {
  WhereClauseContext *_localctx = _tracker.createInstance<WhereClauseContext>(_ctx, getState());
  enterRule(_localctx, 36, SPARQLParser::RuleWhereClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_WHERE) {
      setState(435);
      match(SPARQLParser::K_WHERE);
    }
    setState(438);
    groupGraphPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SolutionModifierContext ------------------------------------------------------------------

SPARQLParser::SolutionModifierContext::SolutionModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::GroupClauseContext* SPARQLParser::SolutionModifierContext::groupClause() {
  return getRuleContext<SPARQLParser::GroupClauseContext>(0);
}

SPARQLParser::HavingClauseContext* SPARQLParser::SolutionModifierContext::havingClause() {
  return getRuleContext<SPARQLParser::HavingClauseContext>(0);
}

SPARQLParser::OrderClauseContext* SPARQLParser::SolutionModifierContext::orderClause() {
  return getRuleContext<SPARQLParser::OrderClauseContext>(0);
}

SPARQLParser::LimitoffsetClausesContext* SPARQLParser::SolutionModifierContext::limitoffsetClauses() {
  return getRuleContext<SPARQLParser::LimitoffsetClausesContext>(0);
}


size_t SPARQLParser::SolutionModifierContext::getRuleIndex() const {
  return SPARQLParser::RuleSolutionModifier;
}

void SPARQLParser::SolutionModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSolutionModifier(this);
}

void SPARQLParser::SolutionModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSolutionModifier(this);
}


antlrcpp::Any SPARQLParser::SolutionModifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitSolutionModifier(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::SolutionModifierContext* SPARQLParser::solutionModifier() {
  SolutionModifierContext *_localctx = _tracker.createInstance<SolutionModifierContext>(_ctx, getState());
  enterRule(_localctx, 38, SPARQLParser::RuleSolutionModifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_GROUP) {
      setState(440);
      groupClause();
    }
    setState(444);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_HAVING) {
      setState(443);
      havingClause();
    }
    setState(447);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_ORDER) {
      setState(446);
      orderClause();
    }
    setState(450);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_OFFSET

    || _la == SPARQLParser::K_LIMIT) {
      setState(449);
      limitoffsetClauses();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupClauseContext ------------------------------------------------------------------

SPARQLParser::GroupClauseContext::GroupClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::GroupClauseContext::K_GROUP() {
  return getToken(SPARQLParser::K_GROUP, 0);
}

tree::TerminalNode* SPARQLParser::GroupClauseContext::K_BY() {
  return getToken(SPARQLParser::K_BY, 0);
}

std::vector<SPARQLParser::GroupConditionContext *> SPARQLParser::GroupClauseContext::groupCondition() {
  return getRuleContexts<SPARQLParser::GroupConditionContext>();
}

SPARQLParser::GroupConditionContext* SPARQLParser::GroupClauseContext::groupCondition(size_t i) {
  return getRuleContext<SPARQLParser::GroupConditionContext>(i);
}


size_t SPARQLParser::GroupClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleGroupClause;
}

void SPARQLParser::GroupClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupClause(this);
}

void SPARQLParser::GroupClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupClause(this);
}


antlrcpp::Any SPARQLParser::GroupClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGroupClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GroupClauseContext* SPARQLParser::groupClause() {
  GroupClauseContext *_localctx = _tracker.createInstance<GroupClauseContext>(_ctx, getState());
  enterRule(_localctx, 40, SPARQLParser::RuleGroupClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    match(SPARQLParser::K_GROUP);
    setState(453);
    match(SPARQLParser::K_BY);
    setState(455); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(454);
      groupCondition();
      setState(457); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::K_NOW)
      | (1ULL << SPARQLParser::K_YEAR)
      | (1ULL << SPARQLParser::K_IF)
      | (1ULL << SPARQLParser::K_CONCAT)
      | (1ULL << SPARQLParser::K_MONTH)
      | (1ULL << SPARQLParser::K_FLOOR)
      | (1ULL << SPARQLParser::K_TZ)
      | (1ULL << SPARQLParser::K_CEIL)
      | (1ULL << SPARQLParser::K_HOURS)
      | (1ULL << SPARQLParser::K_DATATYPE)
      | (1ULL << SPARQLParser::K_ISNUMERIC)
      | (1ULL << SPARQLParser::K_STRUUID)
      | (1ULL << SPARQLParser::K_BOUND)
      | (1ULL << SPARQLParser::K_TIMEZONE)
      | (1ULL << SPARQLParser::K_MIN)
      | (1ULL << SPARQLParser::K_ISBLANK)
      | (1ULL << SPARQLParser::K_UUID))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (SPARQLParser::K_IRI - 65))
      | (1ULL << (SPARQLParser::K_BNODE - 65))
      | (1ULL << (SPARQLParser::K_AVG - 65))
      | (1ULL << (SPARQLParser::K_SAMPLE - 65))
      | (1ULL << (SPARQLParser::K_UCASE - 65))
      | (1ULL << (SPARQLParser::K_SAMETERM - 65))
      | (1ULL << (SPARQLParser::K_STRSTARTS - 65))
      | (1ULL << (SPARQLParser::K_STR - 65))
      | (1ULL << (SPARQLParser::K_COALESCE - 65))
      | (1ULL << (SPARQLParser::K_STRBEFORE - 65))
      | (1ULL << (SPARQLParser::K_ABS - 65))
      | (1ULL << (SPARQLParser::K_ISLITERAL - 65))
      | (1ULL << (SPARQLParser::K_STRAFTER - 65))
      | (1ULL << (SPARQLParser::K_STRLEN - 65))
      | (1ULL << (SPARQLParser::K_LANG - 65))
      | (1ULL << (SPARQLParser::K_MAX - 65))
      | (1ULL << (SPARQLParser::K_NOT - 65))
      | (1ULL << (SPARQLParser::K_STRENDS - 65))
      | (1ULL << (SPARQLParser::K_CONTAINS - 65))
      | (1ULL << (SPARQLParser::K_MINUTES - 65))
      | (1ULL << (SPARQLParser::K_REPLACE - 65))
      | (1ULL << (SPARQLParser::K_REGEX - 65))
      | (1ULL << (SPARQLParser::K_DAY - 65))
      | (1ULL << (SPARQLParser::K_STRLANG - 65))
      | (1ULL << (SPARQLParser::K_ROUND - 65))
      | (1ULL << (SPARQLParser::K_SECONDS - 65))
      | (1ULL << (SPARQLParser::K_URI - 65))
      | (1ULL << (SPARQLParser::K_EXISTS - 65))
      | (1ULL << (SPARQLParser::K_SUM - 65))
      | (1ULL << (SPARQLParser::K_LANGMATCHES - 65))
      | (1ULL << (SPARQLParser::K_ISURI - 65))
      | (1ULL << (SPARQLParser::K_ISIRI - 65))
      | (1ULL << (SPARQLParser::K_RAND - 65))
      | (1ULL << (SPARQLParser::K_STRDT - 65))
      | (1ULL << (SPARQLParser::K_COUNT - 65))
      | (1ULL << (SPARQLParser::K_LCASE - 65)))) != 0) || ((((_la - 131) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 131)) & ((1ULL << (SPARQLParser::K_SUBSTR - 131))
      | (1ULL << (SPARQLParser::KK_ENCODE_FOR_URI - 131))
      | (1ULL << (SPARQLParser::KK_MD5 - 131))
      | (1ULL << (SPARQLParser::KK_SHA1 - 131))
      | (1ULL << (SPARQLParser::KK_SHA256 - 131))
      | (1ULL << (SPARQLParser::KK_SHA384 - 131))
      | (1ULL << (SPARQLParser::KK_SHA512 - 131))
      | (1ULL << (SPARQLParser::KK_GROUP_CONCAT - 131))
      | (1ULL << (SPARQLParser::IRIREF - 131))
      | (1ULL << (SPARQLParser::PNAME_NS - 131))
      | (1ULL << (SPARQLParser::PNAME_LN - 131))
      | (1ULL << (SPARQLParser::VAR1 - 131))
      | (1ULL << (SPARQLParser::VAR2 - 131)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupConditionContext ------------------------------------------------------------------

SPARQLParser::GroupConditionContext::GroupConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::BuiltInCallContext* SPARQLParser::GroupConditionContext::builtInCall() {
  return getRuleContext<SPARQLParser::BuiltInCallContext>(0);
}

SPARQLParser::FunctionCallContext* SPARQLParser::GroupConditionContext::functionCall() {
  return getRuleContext<SPARQLParser::FunctionCallContext>(0);
}

SPARQLParser::ExpressionContext* SPARQLParser::GroupConditionContext::expression() {
  return getRuleContext<SPARQLParser::ExpressionContext>(0);
}

tree::TerminalNode* SPARQLParser::GroupConditionContext::K_AS() {
  return getToken(SPARQLParser::K_AS, 0);
}

SPARQLParser::VarContext* SPARQLParser::GroupConditionContext::var() {
  return getRuleContext<SPARQLParser::VarContext>(0);
}


size_t SPARQLParser::GroupConditionContext::getRuleIndex() const {
  return SPARQLParser::RuleGroupCondition;
}

void SPARQLParser::GroupConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupCondition(this);
}

void SPARQLParser::GroupConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupCondition(this);
}


antlrcpp::Any SPARQLParser::GroupConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGroupCondition(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GroupConditionContext* SPARQLParser::groupCondition() {
  GroupConditionContext *_localctx = _tracker.createInstance<GroupConditionContext>(_ctx, getState());
  enterRule(_localctx, 42, SPARQLParser::RuleGroupCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(470);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_NOW:
      case SPARQLParser::K_YEAR:
      case SPARQLParser::K_IF:
      case SPARQLParser::K_CONCAT:
      case SPARQLParser::K_MONTH:
      case SPARQLParser::K_FLOOR:
      case SPARQLParser::K_TZ:
      case SPARQLParser::K_CEIL:
      case SPARQLParser::K_HOURS:
      case SPARQLParser::K_DATATYPE:
      case SPARQLParser::K_ISNUMERIC:
      case SPARQLParser::K_STRUUID:
      case SPARQLParser::K_BOUND:
      case SPARQLParser::K_TIMEZONE:
      case SPARQLParser::K_MIN:
      case SPARQLParser::K_ISBLANK:
      case SPARQLParser::K_UUID:
      case SPARQLParser::K_IRI:
      case SPARQLParser::K_BNODE:
      case SPARQLParser::K_AVG:
      case SPARQLParser::K_SAMPLE:
      case SPARQLParser::K_UCASE:
      case SPARQLParser::K_SAMETERM:
      case SPARQLParser::K_STRSTARTS:
      case SPARQLParser::K_STR:
      case SPARQLParser::K_COALESCE:
      case SPARQLParser::K_STRBEFORE:
      case SPARQLParser::K_ABS:
      case SPARQLParser::K_ISLITERAL:
      case SPARQLParser::K_STRAFTER:
      case SPARQLParser::K_STRLEN:
      case SPARQLParser::K_LANG:
      case SPARQLParser::K_MAX:
      case SPARQLParser::K_NOT:
      case SPARQLParser::K_STRENDS:
      case SPARQLParser::K_CONTAINS:
      case SPARQLParser::K_MINUTES:
      case SPARQLParser::K_REPLACE:
      case SPARQLParser::K_REGEX:
      case SPARQLParser::K_DAY:
      case SPARQLParser::K_STRLANG:
      case SPARQLParser::K_ROUND:
      case SPARQLParser::K_SECONDS:
      case SPARQLParser::K_URI:
      case SPARQLParser::K_EXISTS:
      case SPARQLParser::K_SUM:
      case SPARQLParser::K_LANGMATCHES:
      case SPARQLParser::K_ISURI:
      case SPARQLParser::K_ISIRI:
      case SPARQLParser::K_RAND:
      case SPARQLParser::K_STRDT:
      case SPARQLParser::K_COUNT:
      case SPARQLParser::K_LCASE:
      case SPARQLParser::K_SUBSTR:
      case SPARQLParser::KK_ENCODE_FOR_URI:
      case SPARQLParser::KK_MD5:
      case SPARQLParser::KK_SHA1:
      case SPARQLParser::KK_SHA256:
      case SPARQLParser::KK_SHA384:
      case SPARQLParser::KK_SHA512:
      case SPARQLParser::KK_GROUP_CONCAT: {
        enterOuterAlt(_localctx, 1);
        setState(459);
        builtInCall();
        break;
      }

      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 2);
        setState(460);
        functionCall();
        break;
      }

      case SPARQLParser::T__1: {
        enterOuterAlt(_localctx, 3);
        setState(461);
        match(SPARQLParser::T__1);
        setState(462);
        expression();
        setState(465);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_AS) {
          setState(463);
          match(SPARQLParser::K_AS);
          setState(464);
          var();
        }
        setState(467);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2: {
        enterOuterAlt(_localctx, 4);
        setState(469);
        var();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HavingClauseContext ------------------------------------------------------------------

SPARQLParser::HavingClauseContext::HavingClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::HavingClauseContext::K_HAVING() {
  return getToken(SPARQLParser::K_HAVING, 0);
}

std::vector<SPARQLParser::HavingConditionContext *> SPARQLParser::HavingClauseContext::havingCondition() {
  return getRuleContexts<SPARQLParser::HavingConditionContext>();
}

SPARQLParser::HavingConditionContext* SPARQLParser::HavingClauseContext::havingCondition(size_t i) {
  return getRuleContext<SPARQLParser::HavingConditionContext>(i);
}


size_t SPARQLParser::HavingClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleHavingClause;
}

void SPARQLParser::HavingClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHavingClause(this);
}

void SPARQLParser::HavingClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHavingClause(this);
}


antlrcpp::Any SPARQLParser::HavingClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitHavingClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::HavingClauseContext* SPARQLParser::havingClause() {
  HavingClauseContext *_localctx = _tracker.createInstance<HavingClauseContext>(_ctx, getState());
  enterRule(_localctx, 44, SPARQLParser::RuleHavingClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    match(SPARQLParser::K_HAVING);
    setState(474); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(473);
      havingCondition();
      setState(476); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::K_NOW)
      | (1ULL << SPARQLParser::K_YEAR)
      | (1ULL << SPARQLParser::K_IF)
      | (1ULL << SPARQLParser::K_CONCAT)
      | (1ULL << SPARQLParser::K_MONTH)
      | (1ULL << SPARQLParser::K_FLOOR)
      | (1ULL << SPARQLParser::K_TZ)
      | (1ULL << SPARQLParser::K_CEIL)
      | (1ULL << SPARQLParser::K_HOURS)
      | (1ULL << SPARQLParser::K_DATATYPE)
      | (1ULL << SPARQLParser::K_ISNUMERIC)
      | (1ULL << SPARQLParser::K_STRUUID)
      | (1ULL << SPARQLParser::K_BOUND)
      | (1ULL << SPARQLParser::K_TIMEZONE)
      | (1ULL << SPARQLParser::K_MIN)
      | (1ULL << SPARQLParser::K_ISBLANK)
      | (1ULL << SPARQLParser::K_UUID))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (SPARQLParser::K_IRI - 65))
      | (1ULL << (SPARQLParser::K_BNODE - 65))
      | (1ULL << (SPARQLParser::K_AVG - 65))
      | (1ULL << (SPARQLParser::K_SAMPLE - 65))
      | (1ULL << (SPARQLParser::K_UCASE - 65))
      | (1ULL << (SPARQLParser::K_SAMETERM - 65))
      | (1ULL << (SPARQLParser::K_STRSTARTS - 65))
      | (1ULL << (SPARQLParser::K_STR - 65))
      | (1ULL << (SPARQLParser::K_COALESCE - 65))
      | (1ULL << (SPARQLParser::K_STRBEFORE - 65))
      | (1ULL << (SPARQLParser::K_ABS - 65))
      | (1ULL << (SPARQLParser::K_ISLITERAL - 65))
      | (1ULL << (SPARQLParser::K_STRAFTER - 65))
      | (1ULL << (SPARQLParser::K_STRLEN - 65))
      | (1ULL << (SPARQLParser::K_LANG - 65))
      | (1ULL << (SPARQLParser::K_MAX - 65))
      | (1ULL << (SPARQLParser::K_NOT - 65))
      | (1ULL << (SPARQLParser::K_STRENDS - 65))
      | (1ULL << (SPARQLParser::K_CONTAINS - 65))
      | (1ULL << (SPARQLParser::K_MINUTES - 65))
      | (1ULL << (SPARQLParser::K_REPLACE - 65))
      | (1ULL << (SPARQLParser::K_REGEX - 65))
      | (1ULL << (SPARQLParser::K_DAY - 65))
      | (1ULL << (SPARQLParser::K_STRLANG - 65))
      | (1ULL << (SPARQLParser::K_ROUND - 65))
      | (1ULL << (SPARQLParser::K_SECONDS - 65))
      | (1ULL << (SPARQLParser::K_URI - 65))
      | (1ULL << (SPARQLParser::K_EXISTS - 65))
      | (1ULL << (SPARQLParser::K_SUM - 65))
      | (1ULL << (SPARQLParser::K_LANGMATCHES - 65))
      | (1ULL << (SPARQLParser::K_ISURI - 65))
      | (1ULL << (SPARQLParser::K_ISIRI - 65))
      | (1ULL << (SPARQLParser::K_RAND - 65))
      | (1ULL << (SPARQLParser::K_STRDT - 65))
      | (1ULL << (SPARQLParser::K_COUNT - 65))
      | (1ULL << (SPARQLParser::K_LCASE - 65)))) != 0) || ((((_la - 131) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 131)) & ((1ULL << (SPARQLParser::K_SUBSTR - 131))
      | (1ULL << (SPARQLParser::KK_ENCODE_FOR_URI - 131))
      | (1ULL << (SPARQLParser::KK_MD5 - 131))
      | (1ULL << (SPARQLParser::KK_SHA1 - 131))
      | (1ULL << (SPARQLParser::KK_SHA256 - 131))
      | (1ULL << (SPARQLParser::KK_SHA384 - 131))
      | (1ULL << (SPARQLParser::KK_SHA512 - 131))
      | (1ULL << (SPARQLParser::KK_GROUP_CONCAT - 131))
      | (1ULL << (SPARQLParser::IRIREF - 131))
      | (1ULL << (SPARQLParser::PNAME_NS - 131))
      | (1ULL << (SPARQLParser::PNAME_LN - 131)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HavingConditionContext ------------------------------------------------------------------

SPARQLParser::HavingConditionContext::HavingConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::ConstraintContext* SPARQLParser::HavingConditionContext::constraint() {
  return getRuleContext<SPARQLParser::ConstraintContext>(0);
}


size_t SPARQLParser::HavingConditionContext::getRuleIndex() const {
  return SPARQLParser::RuleHavingCondition;
}

void SPARQLParser::HavingConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHavingCondition(this);
}

void SPARQLParser::HavingConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHavingCondition(this);
}


antlrcpp::Any SPARQLParser::HavingConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitHavingCondition(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::HavingConditionContext* SPARQLParser::havingCondition() {
  HavingConditionContext *_localctx = _tracker.createInstance<HavingConditionContext>(_ctx, getState());
  enterRule(_localctx, 46, SPARQLParser::RuleHavingCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(478);
    constraint();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderClauseContext ------------------------------------------------------------------

SPARQLParser::OrderClauseContext::OrderClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::OrderClauseContext::K_ORDER() {
  return getToken(SPARQLParser::K_ORDER, 0);
}

tree::TerminalNode* SPARQLParser::OrderClauseContext::K_BY() {
  return getToken(SPARQLParser::K_BY, 0);
}

std::vector<SPARQLParser::OrderConditionContext *> SPARQLParser::OrderClauseContext::orderCondition() {
  return getRuleContexts<SPARQLParser::OrderConditionContext>();
}

SPARQLParser::OrderConditionContext* SPARQLParser::OrderClauseContext::orderCondition(size_t i) {
  return getRuleContext<SPARQLParser::OrderConditionContext>(i);
}


size_t SPARQLParser::OrderClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleOrderClause;
}

void SPARQLParser::OrderClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderClause(this);
}

void SPARQLParser::OrderClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderClause(this);
}


antlrcpp::Any SPARQLParser::OrderClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitOrderClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::OrderClauseContext* SPARQLParser::orderClause() {
  OrderClauseContext *_localctx = _tracker.createInstance<OrderClauseContext>(_ctx, getState());
  enterRule(_localctx, 48, SPARQLParser::RuleOrderClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(480);
    match(SPARQLParser::K_ORDER);
    setState(481);
    match(SPARQLParser::K_BY);
    setState(483); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(482);
      orderCondition();
      setState(485); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::K_NOW)
      | (1ULL << SPARQLParser::K_YEAR)
      | (1ULL << SPARQLParser::K_IF)
      | (1ULL << SPARQLParser::K_ASC)
      | (1ULL << SPARQLParser::K_CONCAT)
      | (1ULL << SPARQLParser::K_MONTH)
      | (1ULL << SPARQLParser::K_FLOOR)
      | (1ULL << SPARQLParser::K_TZ)
      | (1ULL << SPARQLParser::K_CEIL)
      | (1ULL << SPARQLParser::K_HOURS)
      | (1ULL << SPARQLParser::K_DATATYPE)
      | (1ULL << SPARQLParser::K_ISNUMERIC)
      | (1ULL << SPARQLParser::K_STRUUID)
      | (1ULL << SPARQLParser::K_BOUND)
      | (1ULL << SPARQLParser::K_TIMEZONE)
      | (1ULL << SPARQLParser::K_MIN)
      | (1ULL << SPARQLParser::K_ISBLANK)
      | (1ULL << SPARQLParser::K_UUID))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 65)) & ((1ULL << (SPARQLParser::K_IRI - 65))
      | (1ULL << (SPARQLParser::K_BNODE - 65))
      | (1ULL << (SPARQLParser::K_AVG - 65))
      | (1ULL << (SPARQLParser::K_SAMPLE - 65))
      | (1ULL << (SPARQLParser::K_UCASE - 65))
      | (1ULL << (SPARQLParser::K_SAMETERM - 65))
      | (1ULL << (SPARQLParser::K_STRSTARTS - 65))
      | (1ULL << (SPARQLParser::K_STR - 65))
      | (1ULL << (SPARQLParser::K_COALESCE - 65))
      | (1ULL << (SPARQLParser::K_STRBEFORE - 65))
      | (1ULL << (SPARQLParser::K_ABS - 65))
      | (1ULL << (SPARQLParser::K_ISLITERAL - 65))
      | (1ULL << (SPARQLParser::K_STRAFTER - 65))
      | (1ULL << (SPARQLParser::K_STRLEN - 65))
      | (1ULL << (SPARQLParser::K_LANG - 65))
      | (1ULL << (SPARQLParser::K_DESC - 65))
      | (1ULL << (SPARQLParser::K_MAX - 65))
      | (1ULL << (SPARQLParser::K_NOT - 65))
      | (1ULL << (SPARQLParser::K_STRENDS - 65))
      | (1ULL << (SPARQLParser::K_CONTAINS - 65))
      | (1ULL << (SPARQLParser::K_MINUTES - 65))
      | (1ULL << (SPARQLParser::K_REPLACE - 65))
      | (1ULL << (SPARQLParser::K_REGEX - 65))
      | (1ULL << (SPARQLParser::K_DAY - 65))
      | (1ULL << (SPARQLParser::K_STRLANG - 65))
      | (1ULL << (SPARQLParser::K_ROUND - 65))
      | (1ULL << (SPARQLParser::K_SECONDS - 65))
      | (1ULL << (SPARQLParser::K_URI - 65))
      | (1ULL << (SPARQLParser::K_EXISTS - 65))
      | (1ULL << (SPARQLParser::K_SUM - 65))
      | (1ULL << (SPARQLParser::K_LANGMATCHES - 65))
      | (1ULL << (SPARQLParser::K_ISURI - 65))
      | (1ULL << (SPARQLParser::K_ISIRI - 65))
      | (1ULL << (SPARQLParser::K_RAND - 65))
      | (1ULL << (SPARQLParser::K_STRDT - 65))
      | (1ULL << (SPARQLParser::K_COUNT - 65))
      | (1ULL << (SPARQLParser::K_LCASE - 65)))) != 0) || ((((_la - 131) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 131)) & ((1ULL << (SPARQLParser::K_SUBSTR - 131))
      | (1ULL << (SPARQLParser::KK_ENCODE_FOR_URI - 131))
      | (1ULL << (SPARQLParser::KK_MD5 - 131))
      | (1ULL << (SPARQLParser::KK_SHA1 - 131))
      | (1ULL << (SPARQLParser::KK_SHA256 - 131))
      | (1ULL << (SPARQLParser::KK_SHA384 - 131))
      | (1ULL << (SPARQLParser::KK_SHA512 - 131))
      | (1ULL << (SPARQLParser::KK_GROUP_CONCAT - 131))
      | (1ULL << (SPARQLParser::IRIREF - 131))
      | (1ULL << (SPARQLParser::PNAME_NS - 131))
      | (1ULL << (SPARQLParser::PNAME_LN - 131))
      | (1ULL << (SPARQLParser::VAR1 - 131))
      | (1ULL << (SPARQLParser::VAR2 - 131)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrderConditionContext ------------------------------------------------------------------

SPARQLParser::OrderConditionContext::OrderConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::BrackettedexpressionContext* SPARQLParser::OrderConditionContext::brackettedexpression() {
  return getRuleContext<SPARQLParser::BrackettedexpressionContext>(0);
}

tree::TerminalNode* SPARQLParser::OrderConditionContext::K_ASC() {
  return getToken(SPARQLParser::K_ASC, 0);
}

tree::TerminalNode* SPARQLParser::OrderConditionContext::K_DESC() {
  return getToken(SPARQLParser::K_DESC, 0);
}

SPARQLParser::ConstraintContext* SPARQLParser::OrderConditionContext::constraint() {
  return getRuleContext<SPARQLParser::ConstraintContext>(0);
}

SPARQLParser::VarContext* SPARQLParser::OrderConditionContext::var() {
  return getRuleContext<SPARQLParser::VarContext>(0);
}


size_t SPARQLParser::OrderConditionContext::getRuleIndex() const {
  return SPARQLParser::RuleOrderCondition;
}

void SPARQLParser::OrderConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrderCondition(this);
}

void SPARQLParser::OrderConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrderCondition(this);
}


antlrcpp::Any SPARQLParser::OrderConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitOrderCondition(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::OrderConditionContext* SPARQLParser::orderCondition() {
  OrderConditionContext *_localctx = _tracker.createInstance<OrderConditionContext>(_ctx, getState());
  enterRule(_localctx, 50, SPARQLParser::RuleOrderCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(493);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_ASC:
      case SPARQLParser::K_DESC: {
        enterOuterAlt(_localctx, 1);
        setState(487);
        _la = _input->LA(1);
        if (!(_la == SPARQLParser::K_ASC

        || _la == SPARQLParser::K_DESC)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(488);
        brackettedexpression();
        break;
      }

      case SPARQLParser::T__1:
      case SPARQLParser::K_NOW:
      case SPARQLParser::K_YEAR:
      case SPARQLParser::K_IF:
      case SPARQLParser::K_CONCAT:
      case SPARQLParser::K_MONTH:
      case SPARQLParser::K_FLOOR:
      case SPARQLParser::K_TZ:
      case SPARQLParser::K_CEIL:
      case SPARQLParser::K_HOURS:
      case SPARQLParser::K_DATATYPE:
      case SPARQLParser::K_ISNUMERIC:
      case SPARQLParser::K_STRUUID:
      case SPARQLParser::K_BOUND:
      case SPARQLParser::K_TIMEZONE:
      case SPARQLParser::K_MIN:
      case SPARQLParser::K_ISBLANK:
      case SPARQLParser::K_UUID:
      case SPARQLParser::K_IRI:
      case SPARQLParser::K_BNODE:
      case SPARQLParser::K_AVG:
      case SPARQLParser::K_SAMPLE:
      case SPARQLParser::K_UCASE:
      case SPARQLParser::K_SAMETERM:
      case SPARQLParser::K_STRSTARTS:
      case SPARQLParser::K_STR:
      case SPARQLParser::K_COALESCE:
      case SPARQLParser::K_STRBEFORE:
      case SPARQLParser::K_ABS:
      case SPARQLParser::K_ISLITERAL:
      case SPARQLParser::K_STRAFTER:
      case SPARQLParser::K_STRLEN:
      case SPARQLParser::K_LANG:
      case SPARQLParser::K_MAX:
      case SPARQLParser::K_NOT:
      case SPARQLParser::K_STRENDS:
      case SPARQLParser::K_CONTAINS:
      case SPARQLParser::K_MINUTES:
      case SPARQLParser::K_REPLACE:
      case SPARQLParser::K_REGEX:
      case SPARQLParser::K_DAY:
      case SPARQLParser::K_STRLANG:
      case SPARQLParser::K_ROUND:
      case SPARQLParser::K_SECONDS:
      case SPARQLParser::K_URI:
      case SPARQLParser::K_EXISTS:
      case SPARQLParser::K_SUM:
      case SPARQLParser::K_LANGMATCHES:
      case SPARQLParser::K_ISURI:
      case SPARQLParser::K_ISIRI:
      case SPARQLParser::K_RAND:
      case SPARQLParser::K_STRDT:
      case SPARQLParser::K_COUNT:
      case SPARQLParser::K_LCASE:
      case SPARQLParser::K_SUBSTR:
      case SPARQLParser::KK_ENCODE_FOR_URI:
      case SPARQLParser::KK_MD5:
      case SPARQLParser::KK_SHA1:
      case SPARQLParser::KK_SHA256:
      case SPARQLParser::KK_SHA384:
      case SPARQLParser::KK_SHA512:
      case SPARQLParser::KK_GROUP_CONCAT:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2: {
        enterOuterAlt(_localctx, 2);
        setState(491);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SPARQLParser::T__1:
          case SPARQLParser::K_NOW:
          case SPARQLParser::K_YEAR:
          case SPARQLParser::K_IF:
          case SPARQLParser::K_CONCAT:
          case SPARQLParser::K_MONTH:
          case SPARQLParser::K_FLOOR:
          case SPARQLParser::K_TZ:
          case SPARQLParser::K_CEIL:
          case SPARQLParser::K_HOURS:
          case SPARQLParser::K_DATATYPE:
          case SPARQLParser::K_ISNUMERIC:
          case SPARQLParser::K_STRUUID:
          case SPARQLParser::K_BOUND:
          case SPARQLParser::K_TIMEZONE:
          case SPARQLParser::K_MIN:
          case SPARQLParser::K_ISBLANK:
          case SPARQLParser::K_UUID:
          case SPARQLParser::K_IRI:
          case SPARQLParser::K_BNODE:
          case SPARQLParser::K_AVG:
          case SPARQLParser::K_SAMPLE:
          case SPARQLParser::K_UCASE:
          case SPARQLParser::K_SAMETERM:
          case SPARQLParser::K_STRSTARTS:
          case SPARQLParser::K_STR:
          case SPARQLParser::K_COALESCE:
          case SPARQLParser::K_STRBEFORE:
          case SPARQLParser::K_ABS:
          case SPARQLParser::K_ISLITERAL:
          case SPARQLParser::K_STRAFTER:
          case SPARQLParser::K_STRLEN:
          case SPARQLParser::K_LANG:
          case SPARQLParser::K_MAX:
          case SPARQLParser::K_NOT:
          case SPARQLParser::K_STRENDS:
          case SPARQLParser::K_CONTAINS:
          case SPARQLParser::K_MINUTES:
          case SPARQLParser::K_REPLACE:
          case SPARQLParser::K_REGEX:
          case SPARQLParser::K_DAY:
          case SPARQLParser::K_STRLANG:
          case SPARQLParser::K_ROUND:
          case SPARQLParser::K_SECONDS:
          case SPARQLParser::K_URI:
          case SPARQLParser::K_EXISTS:
          case SPARQLParser::K_SUM:
          case SPARQLParser::K_LANGMATCHES:
          case SPARQLParser::K_ISURI:
          case SPARQLParser::K_ISIRI:
          case SPARQLParser::K_RAND:
          case SPARQLParser::K_STRDT:
          case SPARQLParser::K_COUNT:
          case SPARQLParser::K_LCASE:
          case SPARQLParser::K_SUBSTR:
          case SPARQLParser::KK_ENCODE_FOR_URI:
          case SPARQLParser::KK_MD5:
          case SPARQLParser::KK_SHA1:
          case SPARQLParser::KK_SHA256:
          case SPARQLParser::KK_SHA384:
          case SPARQLParser::KK_SHA512:
          case SPARQLParser::KK_GROUP_CONCAT:
          case SPARQLParser::IRIREF:
          case SPARQLParser::PNAME_NS:
          case SPARQLParser::PNAME_LN: {
            setState(489);
            constraint();
            break;
          }

          case SPARQLParser::VAR1:
          case SPARQLParser::VAR2: {
            setState(490);
            var();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LimitoffsetClausesContext ------------------------------------------------------------------

SPARQLParser::LimitoffsetClausesContext::LimitoffsetClausesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::LimitClauseContext* SPARQLParser::LimitoffsetClausesContext::limitClause() {
  return getRuleContext<SPARQLParser::LimitClauseContext>(0);
}

SPARQLParser::OffsetClauseContext* SPARQLParser::LimitoffsetClausesContext::offsetClause() {
  return getRuleContext<SPARQLParser::OffsetClauseContext>(0);
}


size_t SPARQLParser::LimitoffsetClausesContext::getRuleIndex() const {
  return SPARQLParser::RuleLimitoffsetClauses;
}

void SPARQLParser::LimitoffsetClausesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLimitoffsetClauses(this);
}

void SPARQLParser::LimitoffsetClausesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLimitoffsetClauses(this);
}


antlrcpp::Any SPARQLParser::LimitoffsetClausesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitLimitoffsetClauses(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::LimitoffsetClausesContext* SPARQLParser::limitoffsetClauses() {
  LimitoffsetClausesContext *_localctx = _tracker.createInstance<LimitoffsetClausesContext>(_ctx, getState());
  enterRule(_localctx, 52, SPARQLParser::RuleLimitoffsetClauses);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(503);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_LIMIT: {
        enterOuterAlt(_localctx, 1);
        setState(495);
        limitClause();
        setState(497);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_OFFSET) {
          setState(496);
          offsetClause();
        }
        break;
      }

      case SPARQLParser::K_OFFSET: {
        enterOuterAlt(_localctx, 2);
        setState(499);
        offsetClause();
        setState(501);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_LIMIT) {
          setState(500);
          limitClause();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LimitClauseContext ------------------------------------------------------------------

SPARQLParser::LimitClauseContext::LimitClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::LimitClauseContext::K_LIMIT() {
  return getToken(SPARQLParser::K_LIMIT, 0);
}

tree::TerminalNode* SPARQLParser::LimitClauseContext::INTEGER() {
  return getToken(SPARQLParser::INTEGER, 0);
}


size_t SPARQLParser::LimitClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleLimitClause;
}

void SPARQLParser::LimitClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLimitClause(this);
}

void SPARQLParser::LimitClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLimitClause(this);
}


antlrcpp::Any SPARQLParser::LimitClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitLimitClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::LimitClauseContext* SPARQLParser::limitClause() {
  LimitClauseContext *_localctx = _tracker.createInstance<LimitClauseContext>(_ctx, getState());
  enterRule(_localctx, 54, SPARQLParser::RuleLimitClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    match(SPARQLParser::K_LIMIT);
    setState(506);
    match(SPARQLParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OffsetClauseContext ------------------------------------------------------------------

SPARQLParser::OffsetClauseContext::OffsetClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::OffsetClauseContext::K_OFFSET() {
  return getToken(SPARQLParser::K_OFFSET, 0);
}

tree::TerminalNode* SPARQLParser::OffsetClauseContext::INTEGER() {
  return getToken(SPARQLParser::INTEGER, 0);
}


size_t SPARQLParser::OffsetClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleOffsetClause;
}

void SPARQLParser::OffsetClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOffsetClause(this);
}

void SPARQLParser::OffsetClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOffsetClause(this);
}


antlrcpp::Any SPARQLParser::OffsetClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitOffsetClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::OffsetClauseContext* SPARQLParser::offsetClause() {
  OffsetClauseContext *_localctx = _tracker.createInstance<OffsetClauseContext>(_ctx, getState());
  enterRule(_localctx, 56, SPARQLParser::RuleOffsetClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    match(SPARQLParser::K_OFFSET);
    setState(509);
    match(SPARQLParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValuesClauseContext ------------------------------------------------------------------

SPARQLParser::ValuesClauseContext::ValuesClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::ValuesClauseContext::K_VALUES() {
  return getToken(SPARQLParser::K_VALUES, 0);
}

SPARQLParser::DataBlockContext* SPARQLParser::ValuesClauseContext::dataBlock() {
  return getRuleContext<SPARQLParser::DataBlockContext>(0);
}


size_t SPARQLParser::ValuesClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleValuesClause;
}

void SPARQLParser::ValuesClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValuesClause(this);
}

void SPARQLParser::ValuesClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValuesClause(this);
}


antlrcpp::Any SPARQLParser::ValuesClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitValuesClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ValuesClauseContext* SPARQLParser::valuesClause() {
  ValuesClauseContext *_localctx = _tracker.createInstance<ValuesClauseContext>(_ctx, getState());
  enterRule(_localctx, 58, SPARQLParser::RuleValuesClause);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(513);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_VALUES) {
      setState(511);
      match(SPARQLParser::K_VALUES);
      setState(512);
      dataBlock();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpdateContext ------------------------------------------------------------------

SPARQLParser::UpdateContext::UpdateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PrologueContext* SPARQLParser::UpdateContext::prologue() {
  return getRuleContext<SPARQLParser::PrologueContext>(0);
}

SPARQLParser::Update1Context* SPARQLParser::UpdateContext::update1() {
  return getRuleContext<SPARQLParser::Update1Context>(0);
}

SPARQLParser::UpdateContext* SPARQLParser::UpdateContext::update() {
  return getRuleContext<SPARQLParser::UpdateContext>(0);
}


size_t SPARQLParser::UpdateContext::getRuleIndex() const {
  return SPARQLParser::RuleUpdate;
}

void SPARQLParser::UpdateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdate(this);
}

void SPARQLParser::UpdateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdate(this);
}


antlrcpp::Any SPARQLParser::UpdateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitUpdate(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::UpdateContext* SPARQLParser::update() {
  UpdateContext *_localctx = _tracker.createInstance<UpdateContext>(_ctx, getState());
  enterRule(_localctx, 60, SPARQLParser::RuleUpdate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    prologue();
    setState(521);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 7) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 7)) & ((1ULL << (SPARQLParser::T__6 - 7))
      | (1ULL << (SPARQLParser::K_INSERT - 7))
      | (1ULL << (SPARQLParser::K_COPY - 7))
      | (1ULL << (SPARQLParser::K_ADD - 7))
      | (1ULL << (SPARQLParser::K_CLEAR - 7))
      | (1ULL << (SPARQLParser::K_DROP - 7))
      | (1ULL << (SPARQLParser::K_LOAD - 7))
      | (1ULL << (SPARQLParser::K_WITH - 7)))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (SPARQLParser::K_MOVE - 81))
      | (1ULL << (SPARQLParser::K_CREATE - 81))
      | (1ULL << (SPARQLParser::K_DELETE - 81))
      | (1ULL << (SPARQLParser::KK_INSERTDATA - 81))
      | (1ULL << (SPARQLParser::KK_DELETEDATA - 81)))) != 0)) {
      setState(516);
      update1();
      setState(519);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SPARQLParser::T__5) {
        setState(517);
        match(SPARQLParser::T__5);
        setState(518);
        update();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Update1Context ------------------------------------------------------------------

SPARQLParser::Update1Context::Update1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::LoadContext* SPARQLParser::Update1Context::load() {
  return getRuleContext<SPARQLParser::LoadContext>(0);
}

SPARQLParser::ClearContext* SPARQLParser::Update1Context::clear() {
  return getRuleContext<SPARQLParser::ClearContext>(0);
}

SPARQLParser::DropContext* SPARQLParser::Update1Context::drop() {
  return getRuleContext<SPARQLParser::DropContext>(0);
}

SPARQLParser::AddContext* SPARQLParser::Update1Context::add() {
  return getRuleContext<SPARQLParser::AddContext>(0);
}

SPARQLParser::MoveContext* SPARQLParser::Update1Context::move() {
  return getRuleContext<SPARQLParser::MoveContext>(0);
}

SPARQLParser::CopyContext* SPARQLParser::Update1Context::copy() {
  return getRuleContext<SPARQLParser::CopyContext>(0);
}

SPARQLParser::CreateContext* SPARQLParser::Update1Context::create() {
  return getRuleContext<SPARQLParser::CreateContext>(0);
}

SPARQLParser::InsertDataContext* SPARQLParser::Update1Context::insertData() {
  return getRuleContext<SPARQLParser::InsertDataContext>(0);
}

SPARQLParser::DeleteDataContext* SPARQLParser::Update1Context::deleteData() {
  return getRuleContext<SPARQLParser::DeleteDataContext>(0);
}

SPARQLParser::DeleteWhereContext* SPARQLParser::Update1Context::deleteWhere() {
  return getRuleContext<SPARQLParser::DeleteWhereContext>(0);
}

SPARQLParser::ModifyContext* SPARQLParser::Update1Context::modify() {
  return getRuleContext<SPARQLParser::ModifyContext>(0);
}


size_t SPARQLParser::Update1Context::getRuleIndex() const {
  return SPARQLParser::RuleUpdate1;
}

void SPARQLParser::Update1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUpdate1(this);
}

void SPARQLParser::Update1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUpdate1(this);
}


antlrcpp::Any SPARQLParser::Update1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitUpdate1(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::Update1Context* SPARQLParser::update1() {
  Update1Context *_localctx = _tracker.createInstance<Update1Context>(_ctx, getState());
  enterRule(_localctx, 62, SPARQLParser::RuleUpdate1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(534);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_LOAD: {
        enterOuterAlt(_localctx, 1);
        setState(523);
        load();
        break;
      }

      case SPARQLParser::K_CLEAR: {
        enterOuterAlt(_localctx, 2);
        setState(524);
        clear();
        break;
      }

      case SPARQLParser::K_DROP: {
        enterOuterAlt(_localctx, 3);
        setState(525);
        drop();
        break;
      }

      case SPARQLParser::K_ADD: {
        enterOuterAlt(_localctx, 4);
        setState(526);
        add();
        break;
      }

      case SPARQLParser::K_MOVE: {
        enterOuterAlt(_localctx, 5);
        setState(527);
        move();
        break;
      }

      case SPARQLParser::K_COPY: {
        enterOuterAlt(_localctx, 6);
        setState(528);
        copy();
        break;
      }

      case SPARQLParser::K_CREATE: {
        enterOuterAlt(_localctx, 7);
        setState(529);
        create();
        break;
      }

      case SPARQLParser::KK_INSERTDATA: {
        enterOuterAlt(_localctx, 8);
        setState(530);
        insertData();
        break;
      }

      case SPARQLParser::KK_DELETEDATA: {
        enterOuterAlt(_localctx, 9);
        setState(531);
        deleteData();
        break;
      }

      case SPARQLParser::T__6: {
        enterOuterAlt(_localctx, 10);
        setState(532);
        deleteWhere();
        break;
      }

      case SPARQLParser::K_INSERT:
      case SPARQLParser::K_WITH:
      case SPARQLParser::K_DELETE: {
        enterOuterAlt(_localctx, 11);
        setState(533);
        modify();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadContext ------------------------------------------------------------------

SPARQLParser::LoadContext::LoadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::LoadContext::K_LOAD() {
  return getToken(SPARQLParser::K_LOAD, 0);
}

SPARQLParser::IriContext* SPARQLParser::LoadContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}

tree::TerminalNode* SPARQLParser::LoadContext::K_SILENT() {
  return getToken(SPARQLParser::K_SILENT, 0);
}

tree::TerminalNode* SPARQLParser::LoadContext::K_INTO() {
  return getToken(SPARQLParser::K_INTO, 0);
}

SPARQLParser::GraphRefContext* SPARQLParser::LoadContext::graphRef() {
  return getRuleContext<SPARQLParser::GraphRefContext>(0);
}


size_t SPARQLParser::LoadContext::getRuleIndex() const {
  return SPARQLParser::RuleLoad;
}

void SPARQLParser::LoadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoad(this);
}

void SPARQLParser::LoadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoad(this);
}


antlrcpp::Any SPARQLParser::LoadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitLoad(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::LoadContext* SPARQLParser::load() {
  LoadContext *_localctx = _tracker.createInstance<LoadContext>(_ctx, getState());
  enterRule(_localctx, 64, SPARQLParser::RuleLoad);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(536);
    match(SPARQLParser::K_LOAD);
    setState(538);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_SILENT) {
      setState(537);
      match(SPARQLParser::K_SILENT);
    }
    setState(540);
    iri();
    setState(543);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_INTO) {
      setState(541);
      match(SPARQLParser::K_INTO);
      setState(542);
      graphRef();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClearContext ------------------------------------------------------------------

SPARQLParser::ClearContext::ClearContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::ClearContext::K_CLEAR() {
  return getToken(SPARQLParser::K_CLEAR, 0);
}

SPARQLParser::GraphRefAllContext* SPARQLParser::ClearContext::graphRefAll() {
  return getRuleContext<SPARQLParser::GraphRefAllContext>(0);
}

tree::TerminalNode* SPARQLParser::ClearContext::K_SILENT() {
  return getToken(SPARQLParser::K_SILENT, 0);
}


size_t SPARQLParser::ClearContext::getRuleIndex() const {
  return SPARQLParser::RuleClear;
}

void SPARQLParser::ClearContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClear(this);
}

void SPARQLParser::ClearContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClear(this);
}


antlrcpp::Any SPARQLParser::ClearContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitClear(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ClearContext* SPARQLParser::clear() {
  ClearContext *_localctx = _tracker.createInstance<ClearContext>(_ctx, getState());
  enterRule(_localctx, 66, SPARQLParser::RuleClear);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(545);
    match(SPARQLParser::K_CLEAR);
    setState(547);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_SILENT) {
      setState(546);
      match(SPARQLParser::K_SILENT);
    }
    setState(549);
    graphRefAll();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DropContext ------------------------------------------------------------------

SPARQLParser::DropContext::DropContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::DropContext::K_DROP() {
  return getToken(SPARQLParser::K_DROP, 0);
}

SPARQLParser::GraphRefAllContext* SPARQLParser::DropContext::graphRefAll() {
  return getRuleContext<SPARQLParser::GraphRefAllContext>(0);
}

tree::TerminalNode* SPARQLParser::DropContext::K_SILENT() {
  return getToken(SPARQLParser::K_SILENT, 0);
}


size_t SPARQLParser::DropContext::getRuleIndex() const {
  return SPARQLParser::RuleDrop;
}

void SPARQLParser::DropContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDrop(this);
}

void SPARQLParser::DropContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDrop(this);
}


antlrcpp::Any SPARQLParser::DropContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDrop(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::DropContext* SPARQLParser::drop() {
  DropContext *_localctx = _tracker.createInstance<DropContext>(_ctx, getState());
  enterRule(_localctx, 68, SPARQLParser::RuleDrop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    match(SPARQLParser::K_DROP);
    setState(553);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_SILENT) {
      setState(552);
      match(SPARQLParser::K_SILENT);
    }
    setState(555);
    graphRefAll();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CreateContext ------------------------------------------------------------------

SPARQLParser::CreateContext::CreateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::CreateContext::K_CREATE() {
  return getToken(SPARQLParser::K_CREATE, 0);
}

SPARQLParser::GraphRefContext* SPARQLParser::CreateContext::graphRef() {
  return getRuleContext<SPARQLParser::GraphRefContext>(0);
}

tree::TerminalNode* SPARQLParser::CreateContext::K_SILENT() {
  return getToken(SPARQLParser::K_SILENT, 0);
}


size_t SPARQLParser::CreateContext::getRuleIndex() const {
  return SPARQLParser::RuleCreate;
}

void SPARQLParser::CreateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCreate(this);
}

void SPARQLParser::CreateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCreate(this);
}


antlrcpp::Any SPARQLParser::CreateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitCreate(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::CreateContext* SPARQLParser::create() {
  CreateContext *_localctx = _tracker.createInstance<CreateContext>(_ctx, getState());
  enterRule(_localctx, 70, SPARQLParser::RuleCreate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(SPARQLParser::K_CREATE);
    setState(559);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_SILENT) {
      setState(558);
      match(SPARQLParser::K_SILENT);
    }
    setState(561);
    graphRef();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddContext ------------------------------------------------------------------

SPARQLParser::AddContext::AddContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::AddContext::K_ADD() {
  return getToken(SPARQLParser::K_ADD, 0);
}

std::vector<SPARQLParser::GraphOrDefaultContext *> SPARQLParser::AddContext::graphOrDefault() {
  return getRuleContexts<SPARQLParser::GraphOrDefaultContext>();
}

SPARQLParser::GraphOrDefaultContext* SPARQLParser::AddContext::graphOrDefault(size_t i) {
  return getRuleContext<SPARQLParser::GraphOrDefaultContext>(i);
}

tree::TerminalNode* SPARQLParser::AddContext::K_TO() {
  return getToken(SPARQLParser::K_TO, 0);
}

tree::TerminalNode* SPARQLParser::AddContext::K_SILENT() {
  return getToken(SPARQLParser::K_SILENT, 0);
}


size_t SPARQLParser::AddContext::getRuleIndex() const {
  return SPARQLParser::RuleAdd;
}

void SPARQLParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}

void SPARQLParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}


antlrcpp::Any SPARQLParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::AddContext* SPARQLParser::add() {
  AddContext *_localctx = _tracker.createInstance<AddContext>(_ctx, getState());
  enterRule(_localctx, 72, SPARQLParser::RuleAdd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    match(SPARQLParser::K_ADD);
    setState(565);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_SILENT) {
      setState(564);
      match(SPARQLParser::K_SILENT);
    }
    setState(567);
    graphOrDefault();
    setState(568);
    match(SPARQLParser::K_TO);
    setState(569);
    graphOrDefault();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoveContext ------------------------------------------------------------------

SPARQLParser::MoveContext::MoveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::MoveContext::K_MOVE() {
  return getToken(SPARQLParser::K_MOVE, 0);
}

std::vector<SPARQLParser::GraphOrDefaultContext *> SPARQLParser::MoveContext::graphOrDefault() {
  return getRuleContexts<SPARQLParser::GraphOrDefaultContext>();
}

SPARQLParser::GraphOrDefaultContext* SPARQLParser::MoveContext::graphOrDefault(size_t i) {
  return getRuleContext<SPARQLParser::GraphOrDefaultContext>(i);
}

tree::TerminalNode* SPARQLParser::MoveContext::K_TO() {
  return getToken(SPARQLParser::K_TO, 0);
}

tree::TerminalNode* SPARQLParser::MoveContext::K_SILENT() {
  return getToken(SPARQLParser::K_SILENT, 0);
}


size_t SPARQLParser::MoveContext::getRuleIndex() const {
  return SPARQLParser::RuleMove;
}

void SPARQLParser::MoveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMove(this);
}

void SPARQLParser::MoveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMove(this);
}


antlrcpp::Any SPARQLParser::MoveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitMove(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::MoveContext* SPARQLParser::move() {
  MoveContext *_localctx = _tracker.createInstance<MoveContext>(_ctx, getState());
  enterRule(_localctx, 74, SPARQLParser::RuleMove);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(571);
    match(SPARQLParser::K_MOVE);
    setState(573);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_SILENT) {
      setState(572);
      match(SPARQLParser::K_SILENT);
    }
    setState(575);
    graphOrDefault();
    setState(576);
    match(SPARQLParser::K_TO);
    setState(577);
    graphOrDefault();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CopyContext ------------------------------------------------------------------

SPARQLParser::CopyContext::CopyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::CopyContext::K_COPY() {
  return getToken(SPARQLParser::K_COPY, 0);
}

std::vector<SPARQLParser::GraphOrDefaultContext *> SPARQLParser::CopyContext::graphOrDefault() {
  return getRuleContexts<SPARQLParser::GraphOrDefaultContext>();
}

SPARQLParser::GraphOrDefaultContext* SPARQLParser::CopyContext::graphOrDefault(size_t i) {
  return getRuleContext<SPARQLParser::GraphOrDefaultContext>(i);
}

tree::TerminalNode* SPARQLParser::CopyContext::K_TO() {
  return getToken(SPARQLParser::K_TO, 0);
}

tree::TerminalNode* SPARQLParser::CopyContext::K_SILENT() {
  return getToken(SPARQLParser::K_SILENT, 0);
}


size_t SPARQLParser::CopyContext::getRuleIndex() const {
  return SPARQLParser::RuleCopy;
}

void SPARQLParser::CopyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCopy(this);
}

void SPARQLParser::CopyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCopy(this);
}


antlrcpp::Any SPARQLParser::CopyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitCopy(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::CopyContext* SPARQLParser::copy() {
  CopyContext *_localctx = _tracker.createInstance<CopyContext>(_ctx, getState());
  enterRule(_localctx, 76, SPARQLParser::RuleCopy);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(579);
    match(SPARQLParser::K_COPY);
    setState(581);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_SILENT) {
      setState(580);
      match(SPARQLParser::K_SILENT);
    }
    setState(583);
    graphOrDefault();
    setState(584);
    match(SPARQLParser::K_TO);
    setState(585);
    graphOrDefault();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InsertDataContext ------------------------------------------------------------------

SPARQLParser::InsertDataContext::InsertDataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::InsertDataContext::KK_INSERTDATA() {
  return getToken(SPARQLParser::KK_INSERTDATA, 0);
}

SPARQLParser::QuadDataContext* SPARQLParser::InsertDataContext::quadData() {
  return getRuleContext<SPARQLParser::QuadDataContext>(0);
}


size_t SPARQLParser::InsertDataContext::getRuleIndex() const {
  return SPARQLParser::RuleInsertData;
}

void SPARQLParser::InsertDataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsertData(this);
}

void SPARQLParser::InsertDataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsertData(this);
}


antlrcpp::Any SPARQLParser::InsertDataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitInsertData(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::InsertDataContext* SPARQLParser::insertData() {
  InsertDataContext *_localctx = _tracker.createInstance<InsertDataContext>(_ctx, getState());
  enterRule(_localctx, 78, SPARQLParser::RuleInsertData);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(587);
    match(SPARQLParser::KK_INSERTDATA);
    setState(588);
    quadData();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteDataContext ------------------------------------------------------------------

SPARQLParser::DeleteDataContext::DeleteDataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::DeleteDataContext::KK_DELETEDATA() {
  return getToken(SPARQLParser::KK_DELETEDATA, 0);
}

SPARQLParser::QuadDataContext* SPARQLParser::DeleteDataContext::quadData() {
  return getRuleContext<SPARQLParser::QuadDataContext>(0);
}


size_t SPARQLParser::DeleteDataContext::getRuleIndex() const {
  return SPARQLParser::RuleDeleteData;
}

void SPARQLParser::DeleteDataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteData(this);
}

void SPARQLParser::DeleteDataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteData(this);
}


antlrcpp::Any SPARQLParser::DeleteDataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDeleteData(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::DeleteDataContext* SPARQLParser::deleteData() {
  DeleteDataContext *_localctx = _tracker.createInstance<DeleteDataContext>(_ctx, getState());
  enterRule(_localctx, 80, SPARQLParser::RuleDeleteData);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(590);
    match(SPARQLParser::KK_DELETEDATA);
    setState(591);
    quadData();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteWhereContext ------------------------------------------------------------------

SPARQLParser::DeleteWhereContext::DeleteWhereContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::QuadPatternContext* SPARQLParser::DeleteWhereContext::quadPattern() {
  return getRuleContext<SPARQLParser::QuadPatternContext>(0);
}


size_t SPARQLParser::DeleteWhereContext::getRuleIndex() const {
  return SPARQLParser::RuleDeleteWhere;
}

void SPARQLParser::DeleteWhereContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteWhere(this);
}

void SPARQLParser::DeleteWhereContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteWhere(this);
}


antlrcpp::Any SPARQLParser::DeleteWhereContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDeleteWhere(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::DeleteWhereContext* SPARQLParser::deleteWhere() {
  DeleteWhereContext *_localctx = _tracker.createInstance<DeleteWhereContext>(_ctx, getState());
  enterRule(_localctx, 82, SPARQLParser::RuleDeleteWhere);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(593);
    match(SPARQLParser::T__6);
    setState(594);
    quadPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModifyContext ------------------------------------------------------------------

SPARQLParser::ModifyContext::ModifyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::ModifyContext::K_WHERE() {
  return getToken(SPARQLParser::K_WHERE, 0);
}

SPARQLParser::GroupGraphPatternContext* SPARQLParser::ModifyContext::groupGraphPattern() {
  return getRuleContext<SPARQLParser::GroupGraphPatternContext>(0);
}

SPARQLParser::DeleteClauseContext* SPARQLParser::ModifyContext::deleteClause() {
  return getRuleContext<SPARQLParser::DeleteClauseContext>(0);
}

SPARQLParser::InsertClauseContext* SPARQLParser::ModifyContext::insertClause() {
  return getRuleContext<SPARQLParser::InsertClauseContext>(0);
}

tree::TerminalNode* SPARQLParser::ModifyContext::K_WITH() {
  return getToken(SPARQLParser::K_WITH, 0);
}

SPARQLParser::IriContext* SPARQLParser::ModifyContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}

std::vector<SPARQLParser::UsingClauseContext *> SPARQLParser::ModifyContext::usingClause() {
  return getRuleContexts<SPARQLParser::UsingClauseContext>();
}

SPARQLParser::UsingClauseContext* SPARQLParser::ModifyContext::usingClause(size_t i) {
  return getRuleContext<SPARQLParser::UsingClauseContext>(i);
}


size_t SPARQLParser::ModifyContext::getRuleIndex() const {
  return SPARQLParser::RuleModify;
}

void SPARQLParser::ModifyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModify(this);
}

void SPARQLParser::ModifyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModify(this);
}


antlrcpp::Any SPARQLParser::ModifyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitModify(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ModifyContext* SPARQLParser::modify() {
  ModifyContext *_localctx = _tracker.createInstance<ModifyContext>(_ctx, getState());
  enterRule(_localctx, 84, SPARQLParser::RuleModify);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(598);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_WITH) {
      setState(596);
      match(SPARQLParser::K_WITH);
      setState(597);
      iri();
    }
    setState(605);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_DELETE: {
        setState(600);
        deleteClause();
        setState(602);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_INSERT) {
          setState(601);
          insertClause();
        }
        break;
      }

      case SPARQLParser::K_INSERT: {
        setState(604);
        insertClause();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(610);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::K_USING) {
      setState(607);
      usingClause();
      setState(612);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(613);
    match(SPARQLParser::K_WHERE);
    setState(614);
    groupGraphPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeleteClauseContext ------------------------------------------------------------------

SPARQLParser::DeleteClauseContext::DeleteClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::DeleteClauseContext::K_DELETE() {
  return getToken(SPARQLParser::K_DELETE, 0);
}

SPARQLParser::QuadPatternContext* SPARQLParser::DeleteClauseContext::quadPattern() {
  return getRuleContext<SPARQLParser::QuadPatternContext>(0);
}


size_t SPARQLParser::DeleteClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleDeleteClause;
}

void SPARQLParser::DeleteClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeleteClause(this);
}

void SPARQLParser::DeleteClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeleteClause(this);
}


antlrcpp::Any SPARQLParser::DeleteClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDeleteClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::DeleteClauseContext* SPARQLParser::deleteClause() {
  DeleteClauseContext *_localctx = _tracker.createInstance<DeleteClauseContext>(_ctx, getState());
  enterRule(_localctx, 86, SPARQLParser::RuleDeleteClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(616);
    match(SPARQLParser::K_DELETE);
    setState(617);
    quadPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InsertClauseContext ------------------------------------------------------------------

SPARQLParser::InsertClauseContext::InsertClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::InsertClauseContext::K_INSERT() {
  return getToken(SPARQLParser::K_INSERT, 0);
}

SPARQLParser::QuadPatternContext* SPARQLParser::InsertClauseContext::quadPattern() {
  return getRuleContext<SPARQLParser::QuadPatternContext>(0);
}


size_t SPARQLParser::InsertClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleInsertClause;
}

void SPARQLParser::InsertClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInsertClause(this);
}

void SPARQLParser::InsertClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInsertClause(this);
}


antlrcpp::Any SPARQLParser::InsertClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitInsertClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::InsertClauseContext* SPARQLParser::insertClause() {
  InsertClauseContext *_localctx = _tracker.createInstance<InsertClauseContext>(_ctx, getState());
  enterRule(_localctx, 88, SPARQLParser::RuleInsertClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(619);
    match(SPARQLParser::K_INSERT);
    setState(620);
    quadPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsingClauseContext ------------------------------------------------------------------

SPARQLParser::UsingClauseContext::UsingClauseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::UsingClauseContext::K_USING() {
  return getToken(SPARQLParser::K_USING, 0);
}

SPARQLParser::IriContext* SPARQLParser::UsingClauseContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}

tree::TerminalNode* SPARQLParser::UsingClauseContext::K_NAMED() {
  return getToken(SPARQLParser::K_NAMED, 0);
}


size_t SPARQLParser::UsingClauseContext::getRuleIndex() const {
  return SPARQLParser::RuleUsingClause;
}

void SPARQLParser::UsingClauseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsingClause(this);
}

void SPARQLParser::UsingClauseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsingClause(this);
}


antlrcpp::Any SPARQLParser::UsingClauseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitUsingClause(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::UsingClauseContext* SPARQLParser::usingClause() {
  UsingClauseContext *_localctx = _tracker.createInstance<UsingClauseContext>(_ctx, getState());
  enterRule(_localctx, 90, SPARQLParser::RuleUsingClause);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(622);
    match(SPARQLParser::K_USING);
    setState(626);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        setState(623);
        iri();
        break;
      }

      case SPARQLParser::K_NAMED: {
        setState(624);
        match(SPARQLParser::K_NAMED);
        setState(625);
        iri();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphOrDefaultContext ------------------------------------------------------------------

SPARQLParser::GraphOrDefaultContext::GraphOrDefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::GraphOrDefaultContext::K_DEFAULT() {
  return getToken(SPARQLParser::K_DEFAULT, 0);
}

SPARQLParser::IriContext* SPARQLParser::GraphOrDefaultContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}

tree::TerminalNode* SPARQLParser::GraphOrDefaultContext::K_GRAPH() {
  return getToken(SPARQLParser::K_GRAPH, 0);
}


size_t SPARQLParser::GraphOrDefaultContext::getRuleIndex() const {
  return SPARQLParser::RuleGraphOrDefault;
}

void SPARQLParser::GraphOrDefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGraphOrDefault(this);
}

void SPARQLParser::GraphOrDefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGraphOrDefault(this);
}


antlrcpp::Any SPARQLParser::GraphOrDefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGraphOrDefault(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GraphOrDefaultContext* SPARQLParser::graphOrDefault() {
  GraphOrDefaultContext *_localctx = _tracker.createInstance<GraphOrDefaultContext>(_ctx, getState());
  enterRule(_localctx, 92, SPARQLParser::RuleGraphOrDefault);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(633);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_DEFAULT: {
        enterOuterAlt(_localctx, 1);
        setState(628);
        match(SPARQLParser::K_DEFAULT);
        break;
      }

      case SPARQLParser::K_GRAPH:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 2);
        setState(630);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_GRAPH) {
          setState(629);
          match(SPARQLParser::K_GRAPH);
        }
        setState(632);
        iri();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphRefContext ------------------------------------------------------------------

SPARQLParser::GraphRefContext::GraphRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::GraphRefContext::K_GRAPH() {
  return getToken(SPARQLParser::K_GRAPH, 0);
}

SPARQLParser::IriContext* SPARQLParser::GraphRefContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}


size_t SPARQLParser::GraphRefContext::getRuleIndex() const {
  return SPARQLParser::RuleGraphRef;
}

void SPARQLParser::GraphRefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGraphRef(this);
}

void SPARQLParser::GraphRefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGraphRef(this);
}


antlrcpp::Any SPARQLParser::GraphRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGraphRef(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GraphRefContext* SPARQLParser::graphRef() {
  GraphRefContext *_localctx = _tracker.createInstance<GraphRefContext>(_ctx, getState());
  enterRule(_localctx, 94, SPARQLParser::RuleGraphRef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    match(SPARQLParser::K_GRAPH);
    setState(636);
    iri();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphRefAllContext ------------------------------------------------------------------

SPARQLParser::GraphRefAllContext::GraphRefAllContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::GraphRefContext* SPARQLParser::GraphRefAllContext::graphRef() {
  return getRuleContext<SPARQLParser::GraphRefContext>(0);
}

tree::TerminalNode* SPARQLParser::GraphRefAllContext::K_DEFAULT() {
  return getToken(SPARQLParser::K_DEFAULT, 0);
}

tree::TerminalNode* SPARQLParser::GraphRefAllContext::K_NAMED() {
  return getToken(SPARQLParser::K_NAMED, 0);
}

tree::TerminalNode* SPARQLParser::GraphRefAllContext::K_ALL() {
  return getToken(SPARQLParser::K_ALL, 0);
}


size_t SPARQLParser::GraphRefAllContext::getRuleIndex() const {
  return SPARQLParser::RuleGraphRefAll;
}

void SPARQLParser::GraphRefAllContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGraphRefAll(this);
}

void SPARQLParser::GraphRefAllContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGraphRefAll(this);
}


antlrcpp::Any SPARQLParser::GraphRefAllContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGraphRefAll(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GraphRefAllContext* SPARQLParser::graphRefAll() {
  GraphRefAllContext *_localctx = _tracker.createInstance<GraphRefAllContext>(_ctx, getState());
  enterRule(_localctx, 96, SPARQLParser::RuleGraphRefAll);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(642);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_GRAPH: {
        enterOuterAlt(_localctx, 1);
        setState(638);
        graphRef();
        break;
      }

      case SPARQLParser::K_DEFAULT: {
        enterOuterAlt(_localctx, 2);
        setState(639);
        match(SPARQLParser::K_DEFAULT);
        break;
      }

      case SPARQLParser::K_NAMED: {
        enterOuterAlt(_localctx, 3);
        setState(640);
        match(SPARQLParser::K_NAMED);
        break;
      }

      case SPARQLParser::K_ALL: {
        enterOuterAlt(_localctx, 4);
        setState(641);
        match(SPARQLParser::K_ALL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuadPatternContext ------------------------------------------------------------------

SPARQLParser::QuadPatternContext::QuadPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::QuadsContext* SPARQLParser::QuadPatternContext::quads() {
  return getRuleContext<SPARQLParser::QuadsContext>(0);
}


size_t SPARQLParser::QuadPatternContext::getRuleIndex() const {
  return SPARQLParser::RuleQuadPattern;
}

void SPARQLParser::QuadPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuadPattern(this);
}

void SPARQLParser::QuadPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuadPattern(this);
}


antlrcpp::Any SPARQLParser::QuadPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitQuadPattern(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::QuadPatternContext* SPARQLParser::quadPattern() {
  QuadPatternContext *_localctx = _tracker.createInstance<QuadPatternContext>(_ctx, getState());
  enterRule(_localctx, 98, SPARQLParser::RuleQuadPattern);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(644);
    match(SPARQLParser::T__3);
    setState(645);
    quads();
    setState(646);
    match(SPARQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuadDataContext ------------------------------------------------------------------

SPARQLParser::QuadDataContext::QuadDataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::QuadsContext* SPARQLParser::QuadDataContext::quads() {
  return getRuleContext<SPARQLParser::QuadsContext>(0);
}


size_t SPARQLParser::QuadDataContext::getRuleIndex() const {
  return SPARQLParser::RuleQuadData;
}

void SPARQLParser::QuadDataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuadData(this);
}

void SPARQLParser::QuadDataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuadData(this);
}


antlrcpp::Any SPARQLParser::QuadDataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitQuadData(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::QuadDataContext* SPARQLParser::quadData() {
  QuadDataContext *_localctx = _tracker.createInstance<QuadDataContext>(_ctx, getState());
  enterRule(_localctx, 100, SPARQLParser::RuleQuadData);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(648);
    match(SPARQLParser::T__3);
    setState(649);
    quads();
    setState(650);
    match(SPARQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuadsContext ------------------------------------------------------------------

SPARQLParser::QuadsContext::QuadsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::TriplesTemplateContext *> SPARQLParser::QuadsContext::triplesTemplate() {
  return getRuleContexts<SPARQLParser::TriplesTemplateContext>();
}

SPARQLParser::TriplesTemplateContext* SPARQLParser::QuadsContext::triplesTemplate(size_t i) {
  return getRuleContext<SPARQLParser::TriplesTemplateContext>(i);
}

std::vector<SPARQLParser::QuadsNotTriplesContext *> SPARQLParser::QuadsContext::quadsNotTriples() {
  return getRuleContexts<SPARQLParser::QuadsNotTriplesContext>();
}

SPARQLParser::QuadsNotTriplesContext* SPARQLParser::QuadsContext::quadsNotTriples(size_t i) {
  return getRuleContext<SPARQLParser::QuadsNotTriplesContext>(i);
}


size_t SPARQLParser::QuadsContext::getRuleIndex() const {
  return SPARQLParser::RuleQuads;
}

void SPARQLParser::QuadsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuads(this);
}

void SPARQLParser::QuadsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuads(this);
}


antlrcpp::Any SPARQLParser::QuadsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitQuads(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::QuadsContext* SPARQLParser::quads() {
  QuadsContext *_localctx = _tracker.createInstance<QuadsContext>(_ctx, getState());
  enterRule(_localctx, 102, SPARQLParser::RuleQuads);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(653);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::T__16)
      | (1ULL << SPARQLParser::T__28)
      | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
      | (1ULL << (SPARQLParser::PNAME_NS - 141))
      | (1ULL << (SPARQLParser::PNAME_LN - 141))
      | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
      | (1ULL << (SPARQLParser::VAR1 - 141))
      | (1ULL << (SPARQLParser::VAR2 - 141))
      | (1ULL << (SPARQLParser::INTEGER - 141))
      | (1ULL << (SPARQLParser::DECIMAL - 141))
      | (1ULL << (SPARQLParser::DOUBLE - 141))
      | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
      | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
      | (1ULL << (SPARQLParser::NIL - 141))
      | (1ULL << (SPARQLParser::ANON - 141)))) != 0)) {
      setState(652);
      triplesTemplate();
    }
    setState(664);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::K_GRAPH) {
      setState(655);
      quadsNotTriples();
      setState(657);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SPARQLParser::T__7) {
        setState(656);
        match(SPARQLParser::T__7);
      }
      setState(660);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
        | (1ULL << SPARQLParser::T__16)
        | (1ULL << SPARQLParser::T__28)
        | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
        | (1ULL << (SPARQLParser::PNAME_NS - 141))
        | (1ULL << (SPARQLParser::PNAME_LN - 141))
        | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
        | (1ULL << (SPARQLParser::VAR1 - 141))
        | (1ULL << (SPARQLParser::VAR2 - 141))
        | (1ULL << (SPARQLParser::INTEGER - 141))
        | (1ULL << (SPARQLParser::DECIMAL - 141))
        | (1ULL << (SPARQLParser::DOUBLE - 141))
        | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
        | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
        | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
        | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
        | (1ULL << (SPARQLParser::NIL - 141))
        | (1ULL << (SPARQLParser::ANON - 141)))) != 0)) {
        setState(659);
        triplesTemplate();
      }
      setState(666);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuadsNotTriplesContext ------------------------------------------------------------------

SPARQLParser::QuadsNotTriplesContext::QuadsNotTriplesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::QuadsNotTriplesContext::K_GRAPH() {
  return getToken(SPARQLParser::K_GRAPH, 0);
}

SPARQLParser::VarOrIriContext* SPARQLParser::QuadsNotTriplesContext::varOrIri() {
  return getRuleContext<SPARQLParser::VarOrIriContext>(0);
}

SPARQLParser::TriplesTemplateContext* SPARQLParser::QuadsNotTriplesContext::triplesTemplate() {
  return getRuleContext<SPARQLParser::TriplesTemplateContext>(0);
}


size_t SPARQLParser::QuadsNotTriplesContext::getRuleIndex() const {
  return SPARQLParser::RuleQuadsNotTriples;
}

void SPARQLParser::QuadsNotTriplesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuadsNotTriples(this);
}

void SPARQLParser::QuadsNotTriplesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuadsNotTriples(this);
}


antlrcpp::Any SPARQLParser::QuadsNotTriplesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitQuadsNotTriples(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::QuadsNotTriplesContext* SPARQLParser::quadsNotTriples() {
  QuadsNotTriplesContext *_localctx = _tracker.createInstance<QuadsNotTriplesContext>(_ctx, getState());
  enterRule(_localctx, 104, SPARQLParser::RuleQuadsNotTriples);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(667);
    match(SPARQLParser::K_GRAPH);
    setState(668);
    varOrIri();
    setState(669);
    match(SPARQLParser::T__3);
    setState(671);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::T__16)
      | (1ULL << SPARQLParser::T__28)
      | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
      | (1ULL << (SPARQLParser::PNAME_NS - 141))
      | (1ULL << (SPARQLParser::PNAME_LN - 141))
      | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
      | (1ULL << (SPARQLParser::VAR1 - 141))
      | (1ULL << (SPARQLParser::VAR2 - 141))
      | (1ULL << (SPARQLParser::INTEGER - 141))
      | (1ULL << (SPARQLParser::DECIMAL - 141))
      | (1ULL << (SPARQLParser::DOUBLE - 141))
      | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
      | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
      | (1ULL << (SPARQLParser::NIL - 141))
      | (1ULL << (SPARQLParser::ANON - 141)))) != 0)) {
      setState(670);
      triplesTemplate();
    }
    setState(673);
    match(SPARQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriplesTemplateContext ------------------------------------------------------------------

SPARQLParser::TriplesTemplateContext::TriplesTemplateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::TriplesSameSubjectContext* SPARQLParser::TriplesTemplateContext::triplesSameSubject() {
  return getRuleContext<SPARQLParser::TriplesSameSubjectContext>(0);
}

SPARQLParser::TriplesTemplateContext* SPARQLParser::TriplesTemplateContext::triplesTemplate() {
  return getRuleContext<SPARQLParser::TriplesTemplateContext>(0);
}


size_t SPARQLParser::TriplesTemplateContext::getRuleIndex() const {
  return SPARQLParser::RuleTriplesTemplate;
}

void SPARQLParser::TriplesTemplateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTriplesTemplate(this);
}

void SPARQLParser::TriplesTemplateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTriplesTemplate(this);
}


antlrcpp::Any SPARQLParser::TriplesTemplateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitTriplesTemplate(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::TriplesTemplateContext* SPARQLParser::triplesTemplate() {
  TriplesTemplateContext *_localctx = _tracker.createInstance<TriplesTemplateContext>(_ctx, getState());
  enterRule(_localctx, 106, SPARQLParser::RuleTriplesTemplate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(675);
    triplesSameSubject();
    setState(680);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::T__7) {
      setState(676);
      match(SPARQLParser::T__7);
      setState(678);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
        | (1ULL << SPARQLParser::T__16)
        | (1ULL << SPARQLParser::T__28)
        | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
        | (1ULL << (SPARQLParser::PNAME_NS - 141))
        | (1ULL << (SPARQLParser::PNAME_LN - 141))
        | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
        | (1ULL << (SPARQLParser::VAR1 - 141))
        | (1ULL << (SPARQLParser::VAR2 - 141))
        | (1ULL << (SPARQLParser::INTEGER - 141))
        | (1ULL << (SPARQLParser::DECIMAL - 141))
        | (1ULL << (SPARQLParser::DOUBLE - 141))
        | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
        | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
        | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
        | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
        | (1ULL << (SPARQLParser::NIL - 141))
        | (1ULL << (SPARQLParser::ANON - 141)))) != 0)) {
        setState(677);
        triplesTemplate();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupGraphPatternContext ------------------------------------------------------------------

SPARQLParser::GroupGraphPatternContext::GroupGraphPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::SubSelectContext* SPARQLParser::GroupGraphPatternContext::subSelect() {
  return getRuleContext<SPARQLParser::SubSelectContext>(0);
}

SPARQLParser::GroupGraphPatternSubContext* SPARQLParser::GroupGraphPatternContext::groupGraphPatternSub() {
  return getRuleContext<SPARQLParser::GroupGraphPatternSubContext>(0);
}


size_t SPARQLParser::GroupGraphPatternContext::getRuleIndex() const {
  return SPARQLParser::RuleGroupGraphPattern;
}

void SPARQLParser::GroupGraphPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupGraphPattern(this);
}

void SPARQLParser::GroupGraphPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupGraphPattern(this);
}


antlrcpp::Any SPARQLParser::GroupGraphPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGroupGraphPattern(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GroupGraphPatternContext* SPARQLParser::groupGraphPattern() {
  GroupGraphPatternContext *_localctx = _tracker.createInstance<GroupGraphPatternContext>(_ctx, getState());
  enterRule(_localctx, 108, SPARQLParser::RuleGroupGraphPattern);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(682);
    match(SPARQLParser::T__3);
    setState(685);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_SELECT: {
        setState(683);
        subSelect();
        break;
      }

      case SPARQLParser::T__1:
      case SPARQLParser::T__3:
      case SPARQLParser::T__4:
      case SPARQLParser::T__16:
      case SPARQLParser::T__28:
      case SPARQLParser::T__29:
      case SPARQLParser::K_BIND:
      case SPARQLParser::K_SERVICE:
      case SPARQLParser::K_MINUS:
      case SPARQLParser::K_FILTER:
      case SPARQLParser::K_GRAPH:
      case SPARQLParser::K_VALUES:
      case SPARQLParser::K_OPTIONAL:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::BLANK_NODE_LABEL:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2:
      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE:
      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2:
      case SPARQLParser::NIL:
      case SPARQLParser::ANON: {
        setState(684);
        groupGraphPatternSub();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(687);
    match(SPARQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupGraphPatternSubContext ------------------------------------------------------------------

SPARQLParser::GroupGraphPatternSubContext::GroupGraphPatternSubContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::TriplesBlockContext* SPARQLParser::GroupGraphPatternSubContext::triplesBlock() {
  return getRuleContext<SPARQLParser::TriplesBlockContext>(0);
}

std::vector<SPARQLParser::GraphPatternTriplesBlockContext *> SPARQLParser::GroupGraphPatternSubContext::graphPatternTriplesBlock() {
  return getRuleContexts<SPARQLParser::GraphPatternTriplesBlockContext>();
}

SPARQLParser::GraphPatternTriplesBlockContext* SPARQLParser::GroupGraphPatternSubContext::graphPatternTriplesBlock(size_t i) {
  return getRuleContext<SPARQLParser::GraphPatternTriplesBlockContext>(i);
}


size_t SPARQLParser::GroupGraphPatternSubContext::getRuleIndex() const {
  return SPARQLParser::RuleGroupGraphPatternSub;
}

void SPARQLParser::GroupGraphPatternSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupGraphPatternSub(this);
}

void SPARQLParser::GroupGraphPatternSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupGraphPatternSub(this);
}


antlrcpp::Any SPARQLParser::GroupGraphPatternSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGroupGraphPatternSub(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GroupGraphPatternSubContext* SPARQLParser::groupGraphPatternSub() {
  GroupGraphPatternSubContext *_localctx = _tracker.createInstance<GroupGraphPatternSubContext>(_ctx, getState());
  enterRule(_localctx, 110, SPARQLParser::RuleGroupGraphPatternSub);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(690);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::T__16)
      | (1ULL << SPARQLParser::T__28)
      | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
      | (1ULL << (SPARQLParser::PNAME_NS - 141))
      | (1ULL << (SPARQLParser::PNAME_LN - 141))
      | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
      | (1ULL << (SPARQLParser::VAR1 - 141))
      | (1ULL << (SPARQLParser::VAR2 - 141))
      | (1ULL << (SPARQLParser::INTEGER - 141))
      | (1ULL << (SPARQLParser::DECIMAL - 141))
      | (1ULL << (SPARQLParser::DOUBLE - 141))
      | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
      | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
      | (1ULL << (SPARQLParser::NIL - 141))
      | (1ULL << (SPARQLParser::ANON - 141)))) != 0)) {
      setState(689);
      triplesBlock();
    }
    setState(695);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__3

    || _la == SPARQLParser::K_BIND || ((((_la - 76) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 76)) & ((1ULL << (SPARQLParser::K_SERVICE - 76))
      | (1ULL << (SPARQLParser::K_MINUS - 76))
      | (1ULL << (SPARQLParser::K_FILTER - 76))
      | (1ULL << (SPARQLParser::K_GRAPH - 76))
      | (1ULL << (SPARQLParser::K_VALUES - 76))
      | (1ULL << (SPARQLParser::K_OPTIONAL - 76)))) != 0)) {
      setState(692);
      graphPatternTriplesBlock();
      setState(697);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphPatternTriplesBlockContext ------------------------------------------------------------------

SPARQLParser::GraphPatternTriplesBlockContext::GraphPatternTriplesBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::GraphPatternNotTriplesContext* SPARQLParser::GraphPatternTriplesBlockContext::graphPatternNotTriples() {
  return getRuleContext<SPARQLParser::GraphPatternNotTriplesContext>(0);
}

SPARQLParser::TriplesBlockContext* SPARQLParser::GraphPatternTriplesBlockContext::triplesBlock() {
  return getRuleContext<SPARQLParser::TriplesBlockContext>(0);
}


size_t SPARQLParser::GraphPatternTriplesBlockContext::getRuleIndex() const {
  return SPARQLParser::RuleGraphPatternTriplesBlock;
}

void SPARQLParser::GraphPatternTriplesBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGraphPatternTriplesBlock(this);
}

void SPARQLParser::GraphPatternTriplesBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGraphPatternTriplesBlock(this);
}


antlrcpp::Any SPARQLParser::GraphPatternTriplesBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGraphPatternTriplesBlock(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GraphPatternTriplesBlockContext* SPARQLParser::graphPatternTriplesBlock() {
  GraphPatternTriplesBlockContext *_localctx = _tracker.createInstance<GraphPatternTriplesBlockContext>(_ctx, getState());
  enterRule(_localctx, 112, SPARQLParser::RuleGraphPatternTriplesBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(698);
    graphPatternNotTriples();
    setState(700);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::T__7) {
      setState(699);
      match(SPARQLParser::T__7);
    }
    setState(703);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::T__16)
      | (1ULL << SPARQLParser::T__28)
      | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
      | (1ULL << (SPARQLParser::PNAME_NS - 141))
      | (1ULL << (SPARQLParser::PNAME_LN - 141))
      | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
      | (1ULL << (SPARQLParser::VAR1 - 141))
      | (1ULL << (SPARQLParser::VAR2 - 141))
      | (1ULL << (SPARQLParser::INTEGER - 141))
      | (1ULL << (SPARQLParser::DECIMAL - 141))
      | (1ULL << (SPARQLParser::DOUBLE - 141))
      | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
      | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
      | (1ULL << (SPARQLParser::NIL - 141))
      | (1ULL << (SPARQLParser::ANON - 141)))) != 0)) {
      setState(702);
      triplesBlock();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriplesBlockContext ------------------------------------------------------------------

SPARQLParser::TriplesBlockContext::TriplesBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::TriplesSameSubjectpathContext* SPARQLParser::TriplesBlockContext::triplesSameSubjectpath() {
  return getRuleContext<SPARQLParser::TriplesSameSubjectpathContext>(0);
}

SPARQLParser::TriplesBlockContext* SPARQLParser::TriplesBlockContext::triplesBlock() {
  return getRuleContext<SPARQLParser::TriplesBlockContext>(0);
}


size_t SPARQLParser::TriplesBlockContext::getRuleIndex() const {
  return SPARQLParser::RuleTriplesBlock;
}

void SPARQLParser::TriplesBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTriplesBlock(this);
}

void SPARQLParser::TriplesBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTriplesBlock(this);
}


antlrcpp::Any SPARQLParser::TriplesBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitTriplesBlock(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::TriplesBlockContext* SPARQLParser::triplesBlock() {
  TriplesBlockContext *_localctx = _tracker.createInstance<TriplesBlockContext>(_ctx, getState());
  enterRule(_localctx, 114, SPARQLParser::RuleTriplesBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(705);
    triplesSameSubjectpath();
    setState(710);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::T__7) {
      setState(706);
      match(SPARQLParser::T__7);
      setState(708);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
        | (1ULL << SPARQLParser::T__16)
        | (1ULL << SPARQLParser::T__28)
        | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
        | (1ULL << (SPARQLParser::PNAME_NS - 141))
        | (1ULL << (SPARQLParser::PNAME_LN - 141))
        | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
        | (1ULL << (SPARQLParser::VAR1 - 141))
        | (1ULL << (SPARQLParser::VAR2 - 141))
        | (1ULL << (SPARQLParser::INTEGER - 141))
        | (1ULL << (SPARQLParser::DECIMAL - 141))
        | (1ULL << (SPARQLParser::DOUBLE - 141))
        | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
        | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
        | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
        | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
        | (1ULL << (SPARQLParser::NIL - 141))
        | (1ULL << (SPARQLParser::ANON - 141)))) != 0)) {
        setState(707);
        triplesBlock();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphPatternNotTriplesContext ------------------------------------------------------------------

SPARQLParser::GraphPatternNotTriplesContext::GraphPatternNotTriplesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::GroupOrUnionGraphPatternContext* SPARQLParser::GraphPatternNotTriplesContext::groupOrUnionGraphPattern() {
  return getRuleContext<SPARQLParser::GroupOrUnionGraphPatternContext>(0);
}

SPARQLParser::OptionalGraphPatternContext* SPARQLParser::GraphPatternNotTriplesContext::optionalGraphPattern() {
  return getRuleContext<SPARQLParser::OptionalGraphPatternContext>(0);
}

SPARQLParser::MinusGraphPatternContext* SPARQLParser::GraphPatternNotTriplesContext::minusGraphPattern() {
  return getRuleContext<SPARQLParser::MinusGraphPatternContext>(0);
}

SPARQLParser::GraphGraphPatternContext* SPARQLParser::GraphPatternNotTriplesContext::graphGraphPattern() {
  return getRuleContext<SPARQLParser::GraphGraphPatternContext>(0);
}

SPARQLParser::ServiceGraphPatternContext* SPARQLParser::GraphPatternNotTriplesContext::serviceGraphPattern() {
  return getRuleContext<SPARQLParser::ServiceGraphPatternContext>(0);
}

SPARQLParser::FilterContext* SPARQLParser::GraphPatternNotTriplesContext::filter() {
  return getRuleContext<SPARQLParser::FilterContext>(0);
}

SPARQLParser::BindContext* SPARQLParser::GraphPatternNotTriplesContext::bind() {
  return getRuleContext<SPARQLParser::BindContext>(0);
}

SPARQLParser::InlineDataContext* SPARQLParser::GraphPatternNotTriplesContext::inlineData() {
  return getRuleContext<SPARQLParser::InlineDataContext>(0);
}


size_t SPARQLParser::GraphPatternNotTriplesContext::getRuleIndex() const {
  return SPARQLParser::RuleGraphPatternNotTriples;
}

void SPARQLParser::GraphPatternNotTriplesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGraphPatternNotTriples(this);
}

void SPARQLParser::GraphPatternNotTriplesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGraphPatternNotTriples(this);
}


antlrcpp::Any SPARQLParser::GraphPatternNotTriplesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGraphPatternNotTriples(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GraphPatternNotTriplesContext* SPARQLParser::graphPatternNotTriples() {
  GraphPatternNotTriplesContext *_localctx = _tracker.createInstance<GraphPatternNotTriplesContext>(_ctx, getState());
  enterRule(_localctx, 116, SPARQLParser::RuleGraphPatternNotTriples);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(720);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__3: {
        enterOuterAlt(_localctx, 1);
        setState(712);
        groupOrUnionGraphPattern();
        break;
      }

      case SPARQLParser::K_OPTIONAL: {
        enterOuterAlt(_localctx, 2);
        setState(713);
        optionalGraphPattern();
        break;
      }

      case SPARQLParser::K_MINUS: {
        enterOuterAlt(_localctx, 3);
        setState(714);
        minusGraphPattern();
        break;
      }

      case SPARQLParser::K_GRAPH: {
        enterOuterAlt(_localctx, 4);
        setState(715);
        graphGraphPattern();
        break;
      }

      case SPARQLParser::K_SERVICE: {
        enterOuterAlt(_localctx, 5);
        setState(716);
        serviceGraphPattern();
        break;
      }

      case SPARQLParser::K_FILTER: {
        enterOuterAlt(_localctx, 6);
        setState(717);
        filter();
        break;
      }

      case SPARQLParser::K_BIND: {
        enterOuterAlt(_localctx, 7);
        setState(718);
        bind();
        break;
      }

      case SPARQLParser::K_VALUES: {
        enterOuterAlt(_localctx, 8);
        setState(719);
        inlineData();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptionalGraphPatternContext ------------------------------------------------------------------

SPARQLParser::OptionalGraphPatternContext::OptionalGraphPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::OptionalGraphPatternContext::K_OPTIONAL() {
  return getToken(SPARQLParser::K_OPTIONAL, 0);
}

SPARQLParser::GroupGraphPatternContext* SPARQLParser::OptionalGraphPatternContext::groupGraphPattern() {
  return getRuleContext<SPARQLParser::GroupGraphPatternContext>(0);
}


size_t SPARQLParser::OptionalGraphPatternContext::getRuleIndex() const {
  return SPARQLParser::RuleOptionalGraphPattern;
}

void SPARQLParser::OptionalGraphPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptionalGraphPattern(this);
}

void SPARQLParser::OptionalGraphPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptionalGraphPattern(this);
}


antlrcpp::Any SPARQLParser::OptionalGraphPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitOptionalGraphPattern(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::OptionalGraphPatternContext* SPARQLParser::optionalGraphPattern() {
  OptionalGraphPatternContext *_localctx = _tracker.createInstance<OptionalGraphPatternContext>(_ctx, getState());
  enterRule(_localctx, 118, SPARQLParser::RuleOptionalGraphPattern);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(722);
    match(SPARQLParser::K_OPTIONAL);
    setState(723);
    groupGraphPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphGraphPatternContext ------------------------------------------------------------------

SPARQLParser::GraphGraphPatternContext::GraphGraphPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::GraphGraphPatternContext::K_GRAPH() {
  return getToken(SPARQLParser::K_GRAPH, 0);
}

SPARQLParser::VarOrIriContext* SPARQLParser::GraphGraphPatternContext::varOrIri() {
  return getRuleContext<SPARQLParser::VarOrIriContext>(0);
}

SPARQLParser::GroupGraphPatternContext* SPARQLParser::GraphGraphPatternContext::groupGraphPattern() {
  return getRuleContext<SPARQLParser::GroupGraphPatternContext>(0);
}


size_t SPARQLParser::GraphGraphPatternContext::getRuleIndex() const {
  return SPARQLParser::RuleGraphGraphPattern;
}

void SPARQLParser::GraphGraphPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGraphGraphPattern(this);
}

void SPARQLParser::GraphGraphPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGraphGraphPattern(this);
}


antlrcpp::Any SPARQLParser::GraphGraphPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGraphGraphPattern(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GraphGraphPatternContext* SPARQLParser::graphGraphPattern() {
  GraphGraphPatternContext *_localctx = _tracker.createInstance<GraphGraphPatternContext>(_ctx, getState());
  enterRule(_localctx, 120, SPARQLParser::RuleGraphGraphPattern);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(725);
    match(SPARQLParser::K_GRAPH);
    setState(726);
    varOrIri();
    setState(727);
    groupGraphPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ServiceGraphPatternContext ------------------------------------------------------------------

SPARQLParser::ServiceGraphPatternContext::ServiceGraphPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::ServiceGraphPatternContext::K_SERVICE() {
  return getToken(SPARQLParser::K_SERVICE, 0);
}

SPARQLParser::VarOrIriContext* SPARQLParser::ServiceGraphPatternContext::varOrIri() {
  return getRuleContext<SPARQLParser::VarOrIriContext>(0);
}

SPARQLParser::GroupGraphPatternContext* SPARQLParser::ServiceGraphPatternContext::groupGraphPattern() {
  return getRuleContext<SPARQLParser::GroupGraphPatternContext>(0);
}

tree::TerminalNode* SPARQLParser::ServiceGraphPatternContext::K_SILENT() {
  return getToken(SPARQLParser::K_SILENT, 0);
}


size_t SPARQLParser::ServiceGraphPatternContext::getRuleIndex() const {
  return SPARQLParser::RuleServiceGraphPattern;
}

void SPARQLParser::ServiceGraphPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterServiceGraphPattern(this);
}

void SPARQLParser::ServiceGraphPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitServiceGraphPattern(this);
}


antlrcpp::Any SPARQLParser::ServiceGraphPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitServiceGraphPattern(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ServiceGraphPatternContext* SPARQLParser::serviceGraphPattern() {
  ServiceGraphPatternContext *_localctx = _tracker.createInstance<ServiceGraphPatternContext>(_ctx, getState());
  enterRule(_localctx, 122, SPARQLParser::RuleServiceGraphPattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(729);
    match(SPARQLParser::K_SERVICE);
    setState(731);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::K_SILENT) {
      setState(730);
      match(SPARQLParser::K_SILENT);
    }
    setState(733);
    varOrIri();
    setState(734);
    groupGraphPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BindContext ------------------------------------------------------------------

SPARQLParser::BindContext::BindContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::BindContext::K_BIND() {
  return getToken(SPARQLParser::K_BIND, 0);
}

SPARQLParser::ExpressionContext* SPARQLParser::BindContext::expression() {
  return getRuleContext<SPARQLParser::ExpressionContext>(0);
}

tree::TerminalNode* SPARQLParser::BindContext::K_AS() {
  return getToken(SPARQLParser::K_AS, 0);
}

SPARQLParser::VarContext* SPARQLParser::BindContext::var() {
  return getRuleContext<SPARQLParser::VarContext>(0);
}


size_t SPARQLParser::BindContext::getRuleIndex() const {
  return SPARQLParser::RuleBind;
}

void SPARQLParser::BindContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBind(this);
}

void SPARQLParser::BindContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBind(this);
}


antlrcpp::Any SPARQLParser::BindContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitBind(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::BindContext* SPARQLParser::bind() {
  BindContext *_localctx = _tracker.createInstance<BindContext>(_ctx, getState());
  enterRule(_localctx, 124, SPARQLParser::RuleBind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(736);
    match(SPARQLParser::K_BIND);
    setState(737);
    match(SPARQLParser::T__1);
    setState(738);
    expression();
    setState(739);
    match(SPARQLParser::K_AS);
    setState(740);
    var();
    setState(741);
    match(SPARQLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineDataContext ------------------------------------------------------------------

SPARQLParser::InlineDataContext::InlineDataContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::InlineDataContext::K_VALUES() {
  return getToken(SPARQLParser::K_VALUES, 0);
}

SPARQLParser::DataBlockContext* SPARQLParser::InlineDataContext::dataBlock() {
  return getRuleContext<SPARQLParser::DataBlockContext>(0);
}


size_t SPARQLParser::InlineDataContext::getRuleIndex() const {
  return SPARQLParser::RuleInlineData;
}

void SPARQLParser::InlineDataContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineData(this);
}

void SPARQLParser::InlineDataContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineData(this);
}


antlrcpp::Any SPARQLParser::InlineDataContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitInlineData(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::InlineDataContext* SPARQLParser::inlineData() {
  InlineDataContext *_localctx = _tracker.createInstance<InlineDataContext>(_ctx, getState());
  enterRule(_localctx, 126, SPARQLParser::RuleInlineData);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(743);
    match(SPARQLParser::K_VALUES);
    setState(744);
    dataBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataBlockContext ------------------------------------------------------------------

SPARQLParser::DataBlockContext::DataBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::InlineDataOnevarContext* SPARQLParser::DataBlockContext::inlineDataOnevar() {
  return getRuleContext<SPARQLParser::InlineDataOnevarContext>(0);
}

SPARQLParser::InlineDataFullContext* SPARQLParser::DataBlockContext::inlineDataFull() {
  return getRuleContext<SPARQLParser::InlineDataFullContext>(0);
}


size_t SPARQLParser::DataBlockContext::getRuleIndex() const {
  return SPARQLParser::RuleDataBlock;
}

void SPARQLParser::DataBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDataBlock(this);
}

void SPARQLParser::DataBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDataBlock(this);
}


antlrcpp::Any SPARQLParser::DataBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDataBlock(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::DataBlockContext* SPARQLParser::dataBlock() {
  DataBlockContext *_localctx = _tracker.createInstance<DataBlockContext>(_ctx, getState());
  enterRule(_localctx, 128, SPARQLParser::RuleDataBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(748);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2: {
        enterOuterAlt(_localctx, 1);
        setState(746);
        inlineDataOnevar();
        break;
      }

      case SPARQLParser::T__1:
      case SPARQLParser::NIL: {
        enterOuterAlt(_localctx, 2);
        setState(747);
        inlineDataFull();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineDataOnevarContext ------------------------------------------------------------------

SPARQLParser::InlineDataOnevarContext::InlineDataOnevarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::VarContext* SPARQLParser::InlineDataOnevarContext::var() {
  return getRuleContext<SPARQLParser::VarContext>(0);
}

std::vector<SPARQLParser::DataBlockValueContext *> SPARQLParser::InlineDataOnevarContext::dataBlockValue() {
  return getRuleContexts<SPARQLParser::DataBlockValueContext>();
}

SPARQLParser::DataBlockValueContext* SPARQLParser::InlineDataOnevarContext::dataBlockValue(size_t i) {
  return getRuleContext<SPARQLParser::DataBlockValueContext>(i);
}


size_t SPARQLParser::InlineDataOnevarContext::getRuleIndex() const {
  return SPARQLParser::RuleInlineDataOnevar;
}

void SPARQLParser::InlineDataOnevarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineDataOnevar(this);
}

void SPARQLParser::InlineDataOnevarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineDataOnevar(this);
}


antlrcpp::Any SPARQLParser::InlineDataOnevarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitInlineDataOnevar(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::InlineDataOnevarContext* SPARQLParser::inlineDataOnevar() {
  InlineDataOnevarContext *_localctx = _tracker.createInstance<InlineDataOnevarContext>(_ctx, getState());
  enterRule(_localctx, 130, SPARQLParser::RuleInlineDataOnevar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(750);
    var();
    setState(751);
    match(SPARQLParser::T__3);
    setState(755);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__28)
      | (1ULL << SPARQLParser::T__29)
      | (1ULL << SPARQLParser::K_UNDEF))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
      | (1ULL << (SPARQLParser::PNAME_NS - 141))
      | (1ULL << (SPARQLParser::PNAME_LN - 141))
      | (1ULL << (SPARQLParser::INTEGER - 141))
      | (1ULL << (SPARQLParser::DECIMAL - 141))
      | (1ULL << (SPARQLParser::DOUBLE - 141))
      | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
      | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141)))) != 0)) {
      setState(752);
      dataBlockValue();
      setState(757);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(758);
    match(SPARQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InlineDataFullContext ------------------------------------------------------------------

SPARQLParser::InlineDataFullContext::InlineDataFullContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SPARQLParser::InlineDataFullContext::NIL() {
  return getTokens(SPARQLParser::NIL);
}

tree::TerminalNode* SPARQLParser::InlineDataFullContext::NIL(size_t i) {
  return getToken(SPARQLParser::NIL, i);
}

std::vector<SPARQLParser::VarContext *> SPARQLParser::InlineDataFullContext::var() {
  return getRuleContexts<SPARQLParser::VarContext>();
}

SPARQLParser::VarContext* SPARQLParser::InlineDataFullContext::var(size_t i) {
  return getRuleContext<SPARQLParser::VarContext>(i);
}

std::vector<SPARQLParser::DataBlockValueContext *> SPARQLParser::InlineDataFullContext::dataBlockValue() {
  return getRuleContexts<SPARQLParser::DataBlockValueContext>();
}

SPARQLParser::DataBlockValueContext* SPARQLParser::InlineDataFullContext::dataBlockValue(size_t i) {
  return getRuleContext<SPARQLParser::DataBlockValueContext>(i);
}


size_t SPARQLParser::InlineDataFullContext::getRuleIndex() const {
  return SPARQLParser::RuleInlineDataFull;
}

void SPARQLParser::InlineDataFullContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInlineDataFull(this);
}

void SPARQLParser::InlineDataFullContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInlineDataFull(this);
}


antlrcpp::Any SPARQLParser::InlineDataFullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitInlineDataFull(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::InlineDataFullContext* SPARQLParser::inlineDataFull() {
  InlineDataFullContext *_localctx = _tracker.createInstance<InlineDataFullContext>(_ctx, getState());
  enterRule(_localctx, 132, SPARQLParser::RuleInlineDataFull);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(769);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::NIL: {
        setState(760);
        match(SPARQLParser::NIL);
        break;
      }

      case SPARQLParser::T__1: {
        setState(761);
        match(SPARQLParser::T__1);
        setState(765);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SPARQLParser::VAR1

        || _la == SPARQLParser::VAR2) {
          setState(762);
          var();
          setState(767);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(768);
        match(SPARQLParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(771);
    match(SPARQLParser::T__3);
    setState(783);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__1 || _la == SPARQLParser::NIL) {
      setState(781);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SPARQLParser::T__1: {
          setState(772);
          match(SPARQLParser::T__1);
          setState(776);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << SPARQLParser::T__28)
            | (1ULL << SPARQLParser::T__29)
            | (1ULL << SPARQLParser::K_UNDEF))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
            | (1ULL << (SPARQLParser::PNAME_NS - 141))
            | (1ULL << (SPARQLParser::PNAME_LN - 141))
            | (1ULL << (SPARQLParser::INTEGER - 141))
            | (1ULL << (SPARQLParser::DECIMAL - 141))
            | (1ULL << (SPARQLParser::DOUBLE - 141))
            | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
            | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
            | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
            | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
            | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
            | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
            | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
            | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
            | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
            | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141)))) != 0)) {
            setState(773);
            dataBlockValue();
            setState(778);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(779);
          match(SPARQLParser::T__2);
          break;
        }

        case SPARQLParser::NIL: {
          setState(780);
          match(SPARQLParser::NIL);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(785);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(786);
    match(SPARQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DataBlockValueContext ------------------------------------------------------------------

SPARQLParser::DataBlockValueContext::DataBlockValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::IriContext* SPARQLParser::DataBlockValueContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}

SPARQLParser::RDFLiteralContext* SPARQLParser::DataBlockValueContext::rDFLiteral() {
  return getRuleContext<SPARQLParser::RDFLiteralContext>(0);
}

SPARQLParser::NumericLiteralContext* SPARQLParser::DataBlockValueContext::numericLiteral() {
  return getRuleContext<SPARQLParser::NumericLiteralContext>(0);
}

SPARQLParser::BooleanLiteralContext* SPARQLParser::DataBlockValueContext::booleanLiteral() {
  return getRuleContext<SPARQLParser::BooleanLiteralContext>(0);
}

tree::TerminalNode* SPARQLParser::DataBlockValueContext::K_UNDEF() {
  return getToken(SPARQLParser::K_UNDEF, 0);
}


size_t SPARQLParser::DataBlockValueContext::getRuleIndex() const {
  return SPARQLParser::RuleDataBlockValue;
}

void SPARQLParser::DataBlockValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDataBlockValue(this);
}

void SPARQLParser::DataBlockValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDataBlockValue(this);
}


antlrcpp::Any SPARQLParser::DataBlockValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDataBlockValue(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::DataBlockValueContext* SPARQLParser::dataBlockValue() {
  DataBlockValueContext *_localctx = _tracker.createInstance<DataBlockValueContext>(_ctx, getState());
  enterRule(_localctx, 134, SPARQLParser::RuleDataBlockValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(793);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 1);
        setState(788);
        iri();
        break;
      }

      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2: {
        enterOuterAlt(_localctx, 2);
        setState(789);
        rDFLiteral();
        break;
      }

      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE: {
        enterOuterAlt(_localctx, 3);
        setState(790);
        numericLiteral();
        break;
      }

      case SPARQLParser::T__28:
      case SPARQLParser::T__29: {
        enterOuterAlt(_localctx, 4);
        setState(791);
        booleanLiteral();
        break;
      }

      case SPARQLParser::K_UNDEF: {
        enterOuterAlt(_localctx, 5);
        setState(792);
        match(SPARQLParser::K_UNDEF);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MinusGraphPatternContext ------------------------------------------------------------------

SPARQLParser::MinusGraphPatternContext::MinusGraphPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::MinusGraphPatternContext::K_MINUS() {
  return getToken(SPARQLParser::K_MINUS, 0);
}

SPARQLParser::GroupGraphPatternContext* SPARQLParser::MinusGraphPatternContext::groupGraphPattern() {
  return getRuleContext<SPARQLParser::GroupGraphPatternContext>(0);
}


size_t SPARQLParser::MinusGraphPatternContext::getRuleIndex() const {
  return SPARQLParser::RuleMinusGraphPattern;
}

void SPARQLParser::MinusGraphPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinusGraphPattern(this);
}

void SPARQLParser::MinusGraphPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinusGraphPattern(this);
}


antlrcpp::Any SPARQLParser::MinusGraphPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitMinusGraphPattern(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::MinusGraphPatternContext* SPARQLParser::minusGraphPattern() {
  MinusGraphPatternContext *_localctx = _tracker.createInstance<MinusGraphPatternContext>(_ctx, getState());
  enterRule(_localctx, 136, SPARQLParser::RuleMinusGraphPattern);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(795);
    match(SPARQLParser::K_MINUS);
    setState(796);
    groupGraphPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GroupOrUnionGraphPatternContext ------------------------------------------------------------------

SPARQLParser::GroupOrUnionGraphPatternContext::GroupOrUnionGraphPatternContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::GroupGraphPatternContext *> SPARQLParser::GroupOrUnionGraphPatternContext::groupGraphPattern() {
  return getRuleContexts<SPARQLParser::GroupGraphPatternContext>();
}

SPARQLParser::GroupGraphPatternContext* SPARQLParser::GroupOrUnionGraphPatternContext::groupGraphPattern(size_t i) {
  return getRuleContext<SPARQLParser::GroupGraphPatternContext>(i);
}

std::vector<tree::TerminalNode *> SPARQLParser::GroupOrUnionGraphPatternContext::K_UNION() {
  return getTokens(SPARQLParser::K_UNION);
}

tree::TerminalNode* SPARQLParser::GroupOrUnionGraphPatternContext::K_UNION(size_t i) {
  return getToken(SPARQLParser::K_UNION, i);
}


size_t SPARQLParser::GroupOrUnionGraphPatternContext::getRuleIndex() const {
  return SPARQLParser::RuleGroupOrUnionGraphPattern;
}

void SPARQLParser::GroupOrUnionGraphPatternContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGroupOrUnionGraphPattern(this);
}

void SPARQLParser::GroupOrUnionGraphPatternContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGroupOrUnionGraphPattern(this);
}


antlrcpp::Any SPARQLParser::GroupOrUnionGraphPatternContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGroupOrUnionGraphPattern(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GroupOrUnionGraphPatternContext* SPARQLParser::groupOrUnionGraphPattern() {
  GroupOrUnionGraphPatternContext *_localctx = _tracker.createInstance<GroupOrUnionGraphPatternContext>(_ctx, getState());
  enterRule(_localctx, 138, SPARQLParser::RuleGroupOrUnionGraphPattern);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    groupGraphPattern();
    setState(803);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::K_UNION) {
      setState(799);
      match(SPARQLParser::K_UNION);
      setState(800);
      groupGraphPattern();
      setState(805);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilterContext ------------------------------------------------------------------

SPARQLParser::FilterContext::FilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::FilterContext::K_FILTER() {
  return getToken(SPARQLParser::K_FILTER, 0);
}

SPARQLParser::ConstraintContext* SPARQLParser::FilterContext::constraint() {
  return getRuleContext<SPARQLParser::ConstraintContext>(0);
}


size_t SPARQLParser::FilterContext::getRuleIndex() const {
  return SPARQLParser::RuleFilter;
}

void SPARQLParser::FilterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFilter(this);
}

void SPARQLParser::FilterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFilter(this);
}


antlrcpp::Any SPARQLParser::FilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitFilter(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::FilterContext* SPARQLParser::filter() {
  FilterContext *_localctx = _tracker.createInstance<FilterContext>(_ctx, getState());
  enterRule(_localctx, 140, SPARQLParser::RuleFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(806);
    match(SPARQLParser::K_FILTER);
    setState(807);
    constraint();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstraintContext ------------------------------------------------------------------

SPARQLParser::ConstraintContext::ConstraintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::BrackettedexpressionContext* SPARQLParser::ConstraintContext::brackettedexpression() {
  return getRuleContext<SPARQLParser::BrackettedexpressionContext>(0);
}

SPARQLParser::BuiltInCallContext* SPARQLParser::ConstraintContext::builtInCall() {
  return getRuleContext<SPARQLParser::BuiltInCallContext>(0);
}

SPARQLParser::FunctionCallContext* SPARQLParser::ConstraintContext::functionCall() {
  return getRuleContext<SPARQLParser::FunctionCallContext>(0);
}


size_t SPARQLParser::ConstraintContext::getRuleIndex() const {
  return SPARQLParser::RuleConstraint;
}

void SPARQLParser::ConstraintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstraint(this);
}

void SPARQLParser::ConstraintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstraint(this);
}


antlrcpp::Any SPARQLParser::ConstraintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitConstraint(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ConstraintContext* SPARQLParser::constraint() {
  ConstraintContext *_localctx = _tracker.createInstance<ConstraintContext>(_ctx, getState());
  enterRule(_localctx, 142, SPARQLParser::RuleConstraint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(812);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(809);
        brackettedexpression();
        break;
      }

      case SPARQLParser::K_NOW:
      case SPARQLParser::K_YEAR:
      case SPARQLParser::K_IF:
      case SPARQLParser::K_CONCAT:
      case SPARQLParser::K_MONTH:
      case SPARQLParser::K_FLOOR:
      case SPARQLParser::K_TZ:
      case SPARQLParser::K_CEIL:
      case SPARQLParser::K_HOURS:
      case SPARQLParser::K_DATATYPE:
      case SPARQLParser::K_ISNUMERIC:
      case SPARQLParser::K_STRUUID:
      case SPARQLParser::K_BOUND:
      case SPARQLParser::K_TIMEZONE:
      case SPARQLParser::K_MIN:
      case SPARQLParser::K_ISBLANK:
      case SPARQLParser::K_UUID:
      case SPARQLParser::K_IRI:
      case SPARQLParser::K_BNODE:
      case SPARQLParser::K_AVG:
      case SPARQLParser::K_SAMPLE:
      case SPARQLParser::K_UCASE:
      case SPARQLParser::K_SAMETERM:
      case SPARQLParser::K_STRSTARTS:
      case SPARQLParser::K_STR:
      case SPARQLParser::K_COALESCE:
      case SPARQLParser::K_STRBEFORE:
      case SPARQLParser::K_ABS:
      case SPARQLParser::K_ISLITERAL:
      case SPARQLParser::K_STRAFTER:
      case SPARQLParser::K_STRLEN:
      case SPARQLParser::K_LANG:
      case SPARQLParser::K_MAX:
      case SPARQLParser::K_NOT:
      case SPARQLParser::K_STRENDS:
      case SPARQLParser::K_CONTAINS:
      case SPARQLParser::K_MINUTES:
      case SPARQLParser::K_REPLACE:
      case SPARQLParser::K_REGEX:
      case SPARQLParser::K_DAY:
      case SPARQLParser::K_STRLANG:
      case SPARQLParser::K_ROUND:
      case SPARQLParser::K_SECONDS:
      case SPARQLParser::K_URI:
      case SPARQLParser::K_EXISTS:
      case SPARQLParser::K_SUM:
      case SPARQLParser::K_LANGMATCHES:
      case SPARQLParser::K_ISURI:
      case SPARQLParser::K_ISIRI:
      case SPARQLParser::K_RAND:
      case SPARQLParser::K_STRDT:
      case SPARQLParser::K_COUNT:
      case SPARQLParser::K_LCASE:
      case SPARQLParser::K_SUBSTR:
      case SPARQLParser::KK_ENCODE_FOR_URI:
      case SPARQLParser::KK_MD5:
      case SPARQLParser::KK_SHA1:
      case SPARQLParser::KK_SHA256:
      case SPARQLParser::KK_SHA384:
      case SPARQLParser::KK_SHA512:
      case SPARQLParser::KK_GROUP_CONCAT: {
        enterOuterAlt(_localctx, 2);
        setState(810);
        builtInCall();
        break;
      }

      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 3);
        setState(811);
        functionCall();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

SPARQLParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::IriContext* SPARQLParser::FunctionCallContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}

SPARQLParser::ArgListContext* SPARQLParser::FunctionCallContext::argList() {
  return getRuleContext<SPARQLParser::ArgListContext>(0);
}


size_t SPARQLParser::FunctionCallContext::getRuleIndex() const {
  return SPARQLParser::RuleFunctionCall;
}

void SPARQLParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void SPARQLParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


antlrcpp::Any SPARQLParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::FunctionCallContext* SPARQLParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 144, SPARQLParser::RuleFunctionCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(814);
    iri();
    setState(815);
    argList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgListContext ------------------------------------------------------------------

SPARQLParser::ArgListContext::ArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::ArgListContext::NIL() {
  return getToken(SPARQLParser::NIL, 0);
}

std::vector<SPARQLParser::ExpressionContext *> SPARQLParser::ArgListContext::expression() {
  return getRuleContexts<SPARQLParser::ExpressionContext>();
}

SPARQLParser::ExpressionContext* SPARQLParser::ArgListContext::expression(size_t i) {
  return getRuleContext<SPARQLParser::ExpressionContext>(i);
}

tree::TerminalNode* SPARQLParser::ArgListContext::K_DISTINCT() {
  return getToken(SPARQLParser::K_DISTINCT, 0);
}


size_t SPARQLParser::ArgListContext::getRuleIndex() const {
  return SPARQLParser::RuleArgList;
}

void SPARQLParser::ArgListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgList(this);
}

void SPARQLParser::ArgListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgList(this);
}


antlrcpp::Any SPARQLParser::ArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitArgList(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ArgListContext* SPARQLParser::argList() {
  ArgListContext *_localctx = _tracker.createInstance<ArgListContext>(_ctx, getState());
  enterRule(_localctx, 146, SPARQLParser::RuleArgList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(832);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::NIL: {
        enterOuterAlt(_localctx, 1);
        setState(817);
        match(SPARQLParser::NIL);
        break;
      }

      case SPARQLParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(818);
        match(SPARQLParser::T__1);
        setState(820);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_DISTINCT) {
          setState(819);
          match(SPARQLParser::K_DISTINCT);
        }
        setState(822);
        expression();
        setState(827);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SPARQLParser::T__8) {
          setState(823);
          match(SPARQLParser::T__8);
          setState(824);
          expression();
          setState(829);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(830);
        match(SPARQLParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

SPARQLParser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::ExpressionListContext::NIL() {
  return getToken(SPARQLParser::NIL, 0);
}

std::vector<SPARQLParser::ExpressionContext *> SPARQLParser::ExpressionListContext::expression() {
  return getRuleContexts<SPARQLParser::ExpressionContext>();
}

SPARQLParser::ExpressionContext* SPARQLParser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<SPARQLParser::ExpressionContext>(i);
}


size_t SPARQLParser::ExpressionListContext::getRuleIndex() const {
  return SPARQLParser::RuleExpressionList;
}

void SPARQLParser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void SPARQLParser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any SPARQLParser::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ExpressionListContext* SPARQLParser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 148, SPARQLParser::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(846);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::NIL: {
        enterOuterAlt(_localctx, 1);
        setState(834);
        match(SPARQLParser::NIL);
        break;
      }

      case SPARQLParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(835);
        match(SPARQLParser::T__1);
        setState(836);
        expression();
        setState(841);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == SPARQLParser::T__8) {
          setState(837);
          match(SPARQLParser::T__8);
          setState(838);
          expression();
          setState(843);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(844);
        match(SPARQLParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructTemplateContext ------------------------------------------------------------------

SPARQLParser::ConstructTemplateContext::ConstructTemplateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::ConstructTriplesContext* SPARQLParser::ConstructTemplateContext::constructTriples() {
  return getRuleContext<SPARQLParser::ConstructTriplesContext>(0);
}


size_t SPARQLParser::ConstructTemplateContext::getRuleIndex() const {
  return SPARQLParser::RuleConstructTemplate;
}

void SPARQLParser::ConstructTemplateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructTemplate(this);
}

void SPARQLParser::ConstructTemplateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructTemplate(this);
}


antlrcpp::Any SPARQLParser::ConstructTemplateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitConstructTemplate(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ConstructTemplateContext* SPARQLParser::constructTemplate() {
  ConstructTemplateContext *_localctx = _tracker.createInstance<ConstructTemplateContext>(_ctx, getState());
  enterRule(_localctx, 150, SPARQLParser::RuleConstructTemplate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(848);
    match(SPARQLParser::T__3);
    setState(850);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::T__16)
      | (1ULL << SPARQLParser::T__28)
      | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
      | (1ULL << (SPARQLParser::PNAME_NS - 141))
      | (1ULL << (SPARQLParser::PNAME_LN - 141))
      | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
      | (1ULL << (SPARQLParser::VAR1 - 141))
      | (1ULL << (SPARQLParser::VAR2 - 141))
      | (1ULL << (SPARQLParser::INTEGER - 141))
      | (1ULL << (SPARQLParser::DECIMAL - 141))
      | (1ULL << (SPARQLParser::DOUBLE - 141))
      | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
      | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
      | (1ULL << (SPARQLParser::NIL - 141))
      | (1ULL << (SPARQLParser::ANON - 141)))) != 0)) {
      setState(849);
      constructTriples();
    }
    setState(852);
    match(SPARQLParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstructTriplesContext ------------------------------------------------------------------

SPARQLParser::ConstructTriplesContext::ConstructTriplesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::TriplesSameSubjectContext* SPARQLParser::ConstructTriplesContext::triplesSameSubject() {
  return getRuleContext<SPARQLParser::TriplesSameSubjectContext>(0);
}

SPARQLParser::ConstructTriplesContext* SPARQLParser::ConstructTriplesContext::constructTriples() {
  return getRuleContext<SPARQLParser::ConstructTriplesContext>(0);
}


size_t SPARQLParser::ConstructTriplesContext::getRuleIndex() const {
  return SPARQLParser::RuleConstructTriples;
}

void SPARQLParser::ConstructTriplesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstructTriples(this);
}

void SPARQLParser::ConstructTriplesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstructTriples(this);
}


antlrcpp::Any SPARQLParser::ConstructTriplesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitConstructTriples(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ConstructTriplesContext* SPARQLParser::constructTriples() {
  ConstructTriplesContext *_localctx = _tracker.createInstance<ConstructTriplesContext>(_ctx, getState());
  enterRule(_localctx, 152, SPARQLParser::RuleConstructTriples);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(854);
    triplesSameSubject();
    setState(859);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::T__7) {
      setState(855);
      match(SPARQLParser::T__7);
      setState(857);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
        | (1ULL << SPARQLParser::T__16)
        | (1ULL << SPARQLParser::T__28)
        | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
        | (1ULL << (SPARQLParser::PNAME_NS - 141))
        | (1ULL << (SPARQLParser::PNAME_LN - 141))
        | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
        | (1ULL << (SPARQLParser::VAR1 - 141))
        | (1ULL << (SPARQLParser::VAR2 - 141))
        | (1ULL << (SPARQLParser::INTEGER - 141))
        | (1ULL << (SPARQLParser::DECIMAL - 141))
        | (1ULL << (SPARQLParser::DOUBLE - 141))
        | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
        | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
        | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
        | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
        | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
        | (1ULL << (SPARQLParser::NIL - 141))
        | (1ULL << (SPARQLParser::ANON - 141)))) != 0)) {
        setState(856);
        constructTriples();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriplesSameSubjectContext ------------------------------------------------------------------

SPARQLParser::TriplesSameSubjectContext::TriplesSameSubjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::VarOrTermContext* SPARQLParser::TriplesSameSubjectContext::varOrTerm() {
  return getRuleContext<SPARQLParser::VarOrTermContext>(0);
}

SPARQLParser::PropertyListNotEmptyContext* SPARQLParser::TriplesSameSubjectContext::propertyListNotEmpty() {
  return getRuleContext<SPARQLParser::PropertyListNotEmptyContext>(0);
}

SPARQLParser::TriplesNodeContext* SPARQLParser::TriplesSameSubjectContext::triplesNode() {
  return getRuleContext<SPARQLParser::TriplesNodeContext>(0);
}

SPARQLParser::PropertyListContext* SPARQLParser::TriplesSameSubjectContext::propertyList() {
  return getRuleContext<SPARQLParser::PropertyListContext>(0);
}


size_t SPARQLParser::TriplesSameSubjectContext::getRuleIndex() const {
  return SPARQLParser::RuleTriplesSameSubject;
}

void SPARQLParser::TriplesSameSubjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTriplesSameSubject(this);
}

void SPARQLParser::TriplesSameSubjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTriplesSameSubject(this);
}


antlrcpp::Any SPARQLParser::TriplesSameSubjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitTriplesSameSubject(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::TriplesSameSubjectContext* SPARQLParser::triplesSameSubject() {
  TriplesSameSubjectContext *_localctx = _tracker.createInstance<TriplesSameSubjectContext>(_ctx, getState());
  enterRule(_localctx, 154, SPARQLParser::RuleTriplesSameSubject);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(867);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__28:
      case SPARQLParser::T__29:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::BLANK_NODE_LABEL:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2:
      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE:
      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2:
      case SPARQLParser::NIL:
      case SPARQLParser::ANON: {
        enterOuterAlt(_localctx, 1);
        setState(861);
        varOrTerm();
        setState(862);
        propertyListNotEmpty();
        break;
      }

      case SPARQLParser::T__1:
      case SPARQLParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(864);
        triplesNode();
        setState(865);
        propertyList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyListContext ------------------------------------------------------------------

SPARQLParser::PropertyListContext::PropertyListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PropertyListNotEmptyContext* SPARQLParser::PropertyListContext::propertyListNotEmpty() {
  return getRuleContext<SPARQLParser::PropertyListNotEmptyContext>(0);
}


size_t SPARQLParser::PropertyListContext::getRuleIndex() const {
  return SPARQLParser::RulePropertyList;
}

void SPARQLParser::PropertyListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyList(this);
}

void SPARQLParser::PropertyListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyList(this);
}


antlrcpp::Any SPARQLParser::PropertyListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPropertyList(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PropertyListContext* SPARQLParser::propertyList() {
  PropertyListContext *_localctx = _tracker.createInstance<PropertyListContext>(_ctx, getState());
  enterRule(_localctx, 156, SPARQLParser::RulePropertyList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(870);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::T__9 || ((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
      | (1ULL << (SPARQLParser::PNAME_NS - 141))
      | (1ULL << (SPARQLParser::PNAME_LN - 141))
      | (1ULL << (SPARQLParser::VAR1 - 141))
      | (1ULL << (SPARQLParser::VAR2 - 141)))) != 0)) {
      setState(869);
      propertyListNotEmpty();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyListNotEmptyContext ------------------------------------------------------------------

SPARQLParser::PropertyListNotEmptyContext::PropertyListNotEmptyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::VerbContext *> SPARQLParser::PropertyListNotEmptyContext::verb() {
  return getRuleContexts<SPARQLParser::VerbContext>();
}

SPARQLParser::VerbContext* SPARQLParser::PropertyListNotEmptyContext::verb(size_t i) {
  return getRuleContext<SPARQLParser::VerbContext>(i);
}

std::vector<SPARQLParser::ObjectListContext *> SPARQLParser::PropertyListNotEmptyContext::objectList() {
  return getRuleContexts<SPARQLParser::ObjectListContext>();
}

SPARQLParser::ObjectListContext* SPARQLParser::PropertyListNotEmptyContext::objectList(size_t i) {
  return getRuleContext<SPARQLParser::ObjectListContext>(i);
}


size_t SPARQLParser::PropertyListNotEmptyContext::getRuleIndex() const {
  return SPARQLParser::RulePropertyListNotEmpty;
}

void SPARQLParser::PropertyListNotEmptyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyListNotEmpty(this);
}

void SPARQLParser::PropertyListNotEmptyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyListNotEmpty(this);
}


antlrcpp::Any SPARQLParser::PropertyListNotEmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPropertyListNotEmpty(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PropertyListNotEmptyContext* SPARQLParser::propertyListNotEmpty() {
  PropertyListNotEmptyContext *_localctx = _tracker.createInstance<PropertyListNotEmptyContext>(_ctx, getState());
  enterRule(_localctx, 158, SPARQLParser::RulePropertyListNotEmpty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(872);
    verb();
    setState(873);
    objectList();
    setState(882);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__5) {
      setState(874);
      match(SPARQLParser::T__5);
      setState(878);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SPARQLParser::T__9 || ((((_la - 141) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
        | (1ULL << (SPARQLParser::PNAME_NS - 141))
        | (1ULL << (SPARQLParser::PNAME_LN - 141))
        | (1ULL << (SPARQLParser::VAR1 - 141))
        | (1ULL << (SPARQLParser::VAR2 - 141)))) != 0)) {
        setState(875);
        verb();
        setState(876);
        objectList();
      }
      setState(884);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VerbContext ------------------------------------------------------------------

SPARQLParser::VerbContext::VerbContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::VarOrIriContext* SPARQLParser::VerbContext::varOrIri() {
  return getRuleContext<SPARQLParser::VarOrIriContext>(0);
}


size_t SPARQLParser::VerbContext::getRuleIndex() const {
  return SPARQLParser::RuleVerb;
}

void SPARQLParser::VerbContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVerb(this);
}

void SPARQLParser::VerbContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVerb(this);
}


antlrcpp::Any SPARQLParser::VerbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitVerb(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::VerbContext* SPARQLParser::verb() {
  VerbContext *_localctx = _tracker.createInstance<VerbContext>(_ctx, getState());
  enterRule(_localctx, 160, SPARQLParser::RuleVerb);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(887);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2: {
        enterOuterAlt(_localctx, 1);
        setState(885);
        varOrIri();
        break;
      }

      case SPARQLParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(886);
        match(SPARQLParser::T__9);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectListContext ------------------------------------------------------------------

SPARQLParser::ObjectListContext::ObjectListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::ObjectContext *> SPARQLParser::ObjectListContext::object() {
  return getRuleContexts<SPARQLParser::ObjectContext>();
}

SPARQLParser::ObjectContext* SPARQLParser::ObjectListContext::object(size_t i) {
  return getRuleContext<SPARQLParser::ObjectContext>(i);
}


size_t SPARQLParser::ObjectListContext::getRuleIndex() const {
  return SPARQLParser::RuleObjectList;
}

void SPARQLParser::ObjectListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectList(this);
}

void SPARQLParser::ObjectListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectList(this);
}


antlrcpp::Any SPARQLParser::ObjectListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitObjectList(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ObjectListContext* SPARQLParser::objectList() {
  ObjectListContext *_localctx = _tracker.createInstance<ObjectListContext>(_ctx, getState());
  enterRule(_localctx, 162, SPARQLParser::RuleObjectList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(889);
    object();
    setState(894);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__8) {
      setState(890);
      match(SPARQLParser::T__8);
      setState(891);
      object();
      setState(896);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectContext ------------------------------------------------------------------

SPARQLParser::ObjectContext::ObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::GraphNodeContext* SPARQLParser::ObjectContext::graphNode() {
  return getRuleContext<SPARQLParser::GraphNodeContext>(0);
}


size_t SPARQLParser::ObjectContext::getRuleIndex() const {
  return SPARQLParser::RuleObject;
}

void SPARQLParser::ObjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject(this);
}

void SPARQLParser::ObjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject(this);
}


antlrcpp::Any SPARQLParser::ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitObject(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ObjectContext* SPARQLParser::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 164, SPARQLParser::RuleObject);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(897);
    graphNode();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriplesSameSubjectpathContext ------------------------------------------------------------------

SPARQLParser::TriplesSameSubjectpathContext::TriplesSameSubjectpathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::VarOrTermContext* SPARQLParser::TriplesSameSubjectpathContext::varOrTerm() {
  return getRuleContext<SPARQLParser::VarOrTermContext>(0);
}

SPARQLParser::PropertyListpathNotEmptyContext* SPARQLParser::TriplesSameSubjectpathContext::propertyListpathNotEmpty() {
  return getRuleContext<SPARQLParser::PropertyListpathNotEmptyContext>(0);
}

SPARQLParser::TriplesNodepathContext* SPARQLParser::TriplesSameSubjectpathContext::triplesNodepath() {
  return getRuleContext<SPARQLParser::TriplesNodepathContext>(0);
}

SPARQLParser::PropertyListpathContext* SPARQLParser::TriplesSameSubjectpathContext::propertyListpath() {
  return getRuleContext<SPARQLParser::PropertyListpathContext>(0);
}


size_t SPARQLParser::TriplesSameSubjectpathContext::getRuleIndex() const {
  return SPARQLParser::RuleTriplesSameSubjectpath;
}

void SPARQLParser::TriplesSameSubjectpathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTriplesSameSubjectpath(this);
}

void SPARQLParser::TriplesSameSubjectpathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTriplesSameSubjectpath(this);
}


antlrcpp::Any SPARQLParser::TriplesSameSubjectpathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitTriplesSameSubjectpath(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::TriplesSameSubjectpathContext* SPARQLParser::triplesSameSubjectpath() {
  TriplesSameSubjectpathContext *_localctx = _tracker.createInstance<TriplesSameSubjectpathContext>(_ctx, getState());
  enterRule(_localctx, 166, SPARQLParser::RuleTriplesSameSubjectpath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(905);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__28:
      case SPARQLParser::T__29:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::BLANK_NODE_LABEL:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2:
      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE:
      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2:
      case SPARQLParser::NIL:
      case SPARQLParser::ANON: {
        enterOuterAlt(_localctx, 1);
        setState(899);
        varOrTerm();
        setState(900);
        propertyListpathNotEmpty();
        break;
      }

      case SPARQLParser::T__1:
      case SPARQLParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(902);
        triplesNodepath();
        setState(903);
        propertyListpath();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyListpathContext ------------------------------------------------------------------

SPARQLParser::PropertyListpathContext::PropertyListpathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PropertyListpathNotEmptyContext* SPARQLParser::PropertyListpathContext::propertyListpathNotEmpty() {
  return getRuleContext<SPARQLParser::PropertyListpathNotEmptyContext>(0);
}


size_t SPARQLParser::PropertyListpathContext::getRuleIndex() const {
  return SPARQLParser::RulePropertyListpath;
}

void SPARQLParser::PropertyListpathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyListpath(this);
}

void SPARQLParser::PropertyListpathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyListpath(this);
}


antlrcpp::Any SPARQLParser::PropertyListpathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPropertyListpath(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PropertyListpathContext* SPARQLParser::propertyListpath() {
  PropertyListpathContext *_localctx = _tracker.createInstance<PropertyListpathContext>(_ctx, getState());
  enterRule(_localctx, 168, SPARQLParser::RulePropertyListpath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(908);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::T__9)
      | (1ULL << SPARQLParser::T__12)
      | (1ULL << SPARQLParser::T__15))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
      | (1ULL << (SPARQLParser::PNAME_NS - 141))
      | (1ULL << (SPARQLParser::PNAME_LN - 141))
      | (1ULL << (SPARQLParser::VAR1 - 141))
      | (1ULL << (SPARQLParser::VAR2 - 141)))) != 0)) {
      setState(907);
      propertyListpathNotEmpty();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PropertyListpathNotEmptyContext ------------------------------------------------------------------

SPARQLParser::PropertyListpathNotEmptyContext::PropertyListpathNotEmptyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::VerbpathOrSimpleContext *> SPARQLParser::PropertyListpathNotEmptyContext::verbpathOrSimple() {
  return getRuleContexts<SPARQLParser::VerbpathOrSimpleContext>();
}

SPARQLParser::VerbpathOrSimpleContext* SPARQLParser::PropertyListpathNotEmptyContext::verbpathOrSimple(size_t i) {
  return getRuleContext<SPARQLParser::VerbpathOrSimpleContext>(i);
}

SPARQLParser::ObjectListpathContext* SPARQLParser::PropertyListpathNotEmptyContext::objectListpath() {
  return getRuleContext<SPARQLParser::ObjectListpathContext>(0);
}

std::vector<SPARQLParser::ObjectListContext *> SPARQLParser::PropertyListpathNotEmptyContext::objectList() {
  return getRuleContexts<SPARQLParser::ObjectListContext>();
}

SPARQLParser::ObjectListContext* SPARQLParser::PropertyListpathNotEmptyContext::objectList(size_t i) {
  return getRuleContext<SPARQLParser::ObjectListContext>(i);
}


size_t SPARQLParser::PropertyListpathNotEmptyContext::getRuleIndex() const {
  return SPARQLParser::RulePropertyListpathNotEmpty;
}

void SPARQLParser::PropertyListpathNotEmptyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPropertyListpathNotEmpty(this);
}

void SPARQLParser::PropertyListpathNotEmptyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPropertyListpathNotEmpty(this);
}


antlrcpp::Any SPARQLParser::PropertyListpathNotEmptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPropertyListpathNotEmpty(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PropertyListpathNotEmptyContext* SPARQLParser::propertyListpathNotEmpty() {
  PropertyListpathNotEmptyContext *_localctx = _tracker.createInstance<PropertyListpathNotEmptyContext>(_ctx, getState());
  enterRule(_localctx, 170, SPARQLParser::RulePropertyListpathNotEmpty);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(910);
    verbpathOrSimple();
    setState(911);
    objectListpath();
    setState(920);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__5) {
      setState(912);
      match(SPARQLParser::T__5);
      setState(916);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
        | (1ULL << SPARQLParser::T__9)
        | (1ULL << SPARQLParser::T__12)
        | (1ULL << SPARQLParser::T__15))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
        | (1ULL << (SPARQLParser::PNAME_NS - 141))
        | (1ULL << (SPARQLParser::PNAME_LN - 141))
        | (1ULL << (SPARQLParser::VAR1 - 141))
        | (1ULL << (SPARQLParser::VAR2 - 141)))) != 0)) {
        setState(913);
        verbpathOrSimple();
        setState(914);
        objectList();
      }
      setState(922);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VerbpathOrSimpleContext ------------------------------------------------------------------

SPARQLParser::VerbpathOrSimpleContext::VerbpathOrSimpleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::VerbpathContext* SPARQLParser::VerbpathOrSimpleContext::verbpath() {
  return getRuleContext<SPARQLParser::VerbpathContext>(0);
}

SPARQLParser::VerbSimpleContext* SPARQLParser::VerbpathOrSimpleContext::verbSimple() {
  return getRuleContext<SPARQLParser::VerbSimpleContext>(0);
}


size_t SPARQLParser::VerbpathOrSimpleContext::getRuleIndex() const {
  return SPARQLParser::RuleVerbpathOrSimple;
}

void SPARQLParser::VerbpathOrSimpleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVerbpathOrSimple(this);
}

void SPARQLParser::VerbpathOrSimpleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVerbpathOrSimple(this);
}


antlrcpp::Any SPARQLParser::VerbpathOrSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitVerbpathOrSimple(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::VerbpathOrSimpleContext* SPARQLParser::verbpathOrSimple() {
  VerbpathOrSimpleContext *_localctx = _tracker.createInstance<VerbpathOrSimpleContext>(_ctx, getState());
  enterRule(_localctx, 172, SPARQLParser::RuleVerbpathOrSimple);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(925);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__1:
      case SPARQLParser::T__9:
      case SPARQLParser::T__12:
      case SPARQLParser::T__15:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 1);
        setState(923);
        verbpath();
        break;
      }

      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2: {
        enterOuterAlt(_localctx, 2);
        setState(924);
        verbSimple();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VerbpathContext ------------------------------------------------------------------

SPARQLParser::VerbpathContext::VerbpathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PathContext* SPARQLParser::VerbpathContext::path() {
  return getRuleContext<SPARQLParser::PathContext>(0);
}


size_t SPARQLParser::VerbpathContext::getRuleIndex() const {
  return SPARQLParser::RuleVerbpath;
}

void SPARQLParser::VerbpathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVerbpath(this);
}

void SPARQLParser::VerbpathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVerbpath(this);
}


antlrcpp::Any SPARQLParser::VerbpathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitVerbpath(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::VerbpathContext* SPARQLParser::verbpath() {
  VerbpathContext *_localctx = _tracker.createInstance<VerbpathContext>(_ctx, getState());
  enterRule(_localctx, 174, SPARQLParser::RuleVerbpath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(927);
    path();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VerbSimpleContext ------------------------------------------------------------------

SPARQLParser::VerbSimpleContext::VerbSimpleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::VarContext* SPARQLParser::VerbSimpleContext::var() {
  return getRuleContext<SPARQLParser::VarContext>(0);
}


size_t SPARQLParser::VerbSimpleContext::getRuleIndex() const {
  return SPARQLParser::RuleVerbSimple;
}

void SPARQLParser::VerbSimpleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVerbSimple(this);
}

void SPARQLParser::VerbSimpleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVerbSimple(this);
}


antlrcpp::Any SPARQLParser::VerbSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitVerbSimple(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::VerbSimpleContext* SPARQLParser::verbSimple() {
  VerbSimpleContext *_localctx = _tracker.createInstance<VerbSimpleContext>(_ctx, getState());
  enterRule(_localctx, 176, SPARQLParser::RuleVerbSimple);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(929);
    var();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectListpathContext ------------------------------------------------------------------

SPARQLParser::ObjectListpathContext::ObjectListpathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::ObjectpathContext *> SPARQLParser::ObjectListpathContext::objectpath() {
  return getRuleContexts<SPARQLParser::ObjectpathContext>();
}

SPARQLParser::ObjectpathContext* SPARQLParser::ObjectListpathContext::objectpath(size_t i) {
  return getRuleContext<SPARQLParser::ObjectpathContext>(i);
}


size_t SPARQLParser::ObjectListpathContext::getRuleIndex() const {
  return SPARQLParser::RuleObjectListpath;
}

void SPARQLParser::ObjectListpathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectListpath(this);
}

void SPARQLParser::ObjectListpathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectListpath(this);
}


antlrcpp::Any SPARQLParser::ObjectListpathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitObjectListpath(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ObjectListpathContext* SPARQLParser::objectListpath() {
  ObjectListpathContext *_localctx = _tracker.createInstance<ObjectListpathContext>(_ctx, getState());
  enterRule(_localctx, 178, SPARQLParser::RuleObjectListpath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(931);
    objectpath();
    setState(936);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__8) {
      setState(932);
      match(SPARQLParser::T__8);
      setState(933);
      objectpath();
      setState(938);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectpathContext ------------------------------------------------------------------

SPARQLParser::ObjectpathContext::ObjectpathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::GraphNodepathContext* SPARQLParser::ObjectpathContext::graphNodepath() {
  return getRuleContext<SPARQLParser::GraphNodepathContext>(0);
}


size_t SPARQLParser::ObjectpathContext::getRuleIndex() const {
  return SPARQLParser::RuleObjectpath;
}

void SPARQLParser::ObjectpathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectpath(this);
}

void SPARQLParser::ObjectpathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectpath(this);
}


antlrcpp::Any SPARQLParser::ObjectpathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitObjectpath(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ObjectpathContext* SPARQLParser::objectpath() {
  ObjectpathContext *_localctx = _tracker.createInstance<ObjectpathContext>(_ctx, getState());
  enterRule(_localctx, 180, SPARQLParser::RuleObjectpath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(939);
    graphNodepath();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathContext ------------------------------------------------------------------

SPARQLParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PathAlternativeContext* SPARQLParser::PathContext::pathAlternative() {
  return getRuleContext<SPARQLParser::PathAlternativeContext>(0);
}


size_t SPARQLParser::PathContext::getRuleIndex() const {
  return SPARQLParser::RulePath;
}

void SPARQLParser::PathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPath(this);
}

void SPARQLParser::PathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPath(this);
}


antlrcpp::Any SPARQLParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PathContext* SPARQLParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 182, SPARQLParser::RulePath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(941);
    pathAlternative();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathAlternativeContext ------------------------------------------------------------------

SPARQLParser::PathAlternativeContext::PathAlternativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::PathSequenceContext *> SPARQLParser::PathAlternativeContext::pathSequence() {
  return getRuleContexts<SPARQLParser::PathSequenceContext>();
}

SPARQLParser::PathSequenceContext* SPARQLParser::PathAlternativeContext::pathSequence(size_t i) {
  return getRuleContext<SPARQLParser::PathSequenceContext>(i);
}


size_t SPARQLParser::PathAlternativeContext::getRuleIndex() const {
  return SPARQLParser::RulePathAlternative;
}

void SPARQLParser::PathAlternativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathAlternative(this);
}

void SPARQLParser::PathAlternativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathAlternative(this);
}


antlrcpp::Any SPARQLParser::PathAlternativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPathAlternative(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PathAlternativeContext* SPARQLParser::pathAlternative() {
  PathAlternativeContext *_localctx = _tracker.createInstance<PathAlternativeContext>(_ctx, getState());
  enterRule(_localctx, 184, SPARQLParser::RulePathAlternative);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(943);
    pathSequence();
    setState(948);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__10) {
      setState(944);
      match(SPARQLParser::T__10);
      setState(945);
      pathSequence();
      setState(950);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathSequenceContext ------------------------------------------------------------------

SPARQLParser::PathSequenceContext::PathSequenceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::PathEltOrInverseContext *> SPARQLParser::PathSequenceContext::pathEltOrInverse() {
  return getRuleContexts<SPARQLParser::PathEltOrInverseContext>();
}

SPARQLParser::PathEltOrInverseContext* SPARQLParser::PathSequenceContext::pathEltOrInverse(size_t i) {
  return getRuleContext<SPARQLParser::PathEltOrInverseContext>(i);
}


size_t SPARQLParser::PathSequenceContext::getRuleIndex() const {
  return SPARQLParser::RulePathSequence;
}

void SPARQLParser::PathSequenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathSequence(this);
}

void SPARQLParser::PathSequenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathSequence(this);
}


antlrcpp::Any SPARQLParser::PathSequenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPathSequence(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PathSequenceContext* SPARQLParser::pathSequence() {
  PathSequenceContext *_localctx = _tracker.createInstance<PathSequenceContext>(_ctx, getState());
  enterRule(_localctx, 186, SPARQLParser::RulePathSequence);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(951);
    pathEltOrInverse();
    setState(956);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__11) {
      setState(952);
      match(SPARQLParser::T__11);
      setState(953);
      pathEltOrInverse();
      setState(958);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathEltContext ------------------------------------------------------------------

SPARQLParser::PathEltContext::PathEltContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PathPrimaryContext* SPARQLParser::PathEltContext::pathPrimary() {
  return getRuleContext<SPARQLParser::PathPrimaryContext>(0);
}

SPARQLParser::PathModContext* SPARQLParser::PathEltContext::pathMod() {
  return getRuleContext<SPARQLParser::PathModContext>(0);
}


size_t SPARQLParser::PathEltContext::getRuleIndex() const {
  return SPARQLParser::RulePathElt;
}

void SPARQLParser::PathEltContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathElt(this);
}

void SPARQLParser::PathEltContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathElt(this);
}


antlrcpp::Any SPARQLParser::PathEltContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPathElt(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PathEltContext* SPARQLParser::pathElt() {
  PathEltContext *_localctx = _tracker.createInstance<PathEltContext>(_ctx, getState());
  enterRule(_localctx, 188, SPARQLParser::RulePathElt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(959);
    pathPrimary();
    setState(961);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__0)
      | (1ULL << SPARQLParser::T__13)
      | (1ULL << SPARQLParser::T__14))) != 0)) {
      setState(960);
      pathMod();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathEltOrInverseContext ------------------------------------------------------------------

SPARQLParser::PathEltOrInverseContext::PathEltOrInverseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PathEltContext* SPARQLParser::PathEltOrInverseContext::pathElt() {
  return getRuleContext<SPARQLParser::PathEltContext>(0);
}


size_t SPARQLParser::PathEltOrInverseContext::getRuleIndex() const {
  return SPARQLParser::RulePathEltOrInverse;
}

void SPARQLParser::PathEltOrInverseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathEltOrInverse(this);
}

void SPARQLParser::PathEltOrInverseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathEltOrInverse(this);
}


antlrcpp::Any SPARQLParser::PathEltOrInverseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPathEltOrInverse(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PathEltOrInverseContext* SPARQLParser::pathEltOrInverse() {
  PathEltOrInverseContext *_localctx = _tracker.createInstance<PathEltOrInverseContext>(_ctx, getState());
  enterRule(_localctx, 190, SPARQLParser::RulePathEltOrInverse);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(966);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__1:
      case SPARQLParser::T__9:
      case SPARQLParser::T__15:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 1);
        setState(963);
        pathElt();
        break;
      }

      case SPARQLParser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(964);
        match(SPARQLParser::T__12);
        setState(965);
        pathElt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathModContext ------------------------------------------------------------------

SPARQLParser::PathModContext::PathModContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SPARQLParser::PathModContext::getRuleIndex() const {
  return SPARQLParser::RulePathMod;
}

void SPARQLParser::PathModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathMod(this);
}

void SPARQLParser::PathModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathMod(this);
}


antlrcpp::Any SPARQLParser::PathModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPathMod(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PathModContext* SPARQLParser::pathMod() {
  PathModContext *_localctx = _tracker.createInstance<PathModContext>(_ctx, getState());
  enterRule(_localctx, 192, SPARQLParser::RulePathMod);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(968);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__0)
      | (1ULL << SPARQLParser::T__13)
      | (1ULL << SPARQLParser::T__14))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathPrimaryContext ------------------------------------------------------------------

SPARQLParser::PathPrimaryContext::PathPrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::IriContext* SPARQLParser::PathPrimaryContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}

SPARQLParser::PathNegatedPropertySetContext* SPARQLParser::PathPrimaryContext::pathNegatedPropertySet() {
  return getRuleContext<SPARQLParser::PathNegatedPropertySetContext>(0);
}

SPARQLParser::PathContext* SPARQLParser::PathPrimaryContext::path() {
  return getRuleContext<SPARQLParser::PathContext>(0);
}


size_t SPARQLParser::PathPrimaryContext::getRuleIndex() const {
  return SPARQLParser::RulePathPrimary;
}

void SPARQLParser::PathPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathPrimary(this);
}

void SPARQLParser::PathPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathPrimary(this);
}


antlrcpp::Any SPARQLParser::PathPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPathPrimary(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PathPrimaryContext* SPARQLParser::pathPrimary() {
  PathPrimaryContext *_localctx = _tracker.createInstance<PathPrimaryContext>(_ctx, getState());
  enterRule(_localctx, 194, SPARQLParser::RulePathPrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(978);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 1);
        setState(970);
        iri();
        break;
      }

      case SPARQLParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(971);
        match(SPARQLParser::T__9);
        break;
      }

      case SPARQLParser::T__15: {
        enterOuterAlt(_localctx, 3);
        setState(972);
        match(SPARQLParser::T__15);
        setState(973);
        pathNegatedPropertySet();
        break;
      }

      case SPARQLParser::T__1: {
        enterOuterAlt(_localctx, 4);
        setState(974);
        match(SPARQLParser::T__1);
        setState(975);
        path();
        setState(976);
        match(SPARQLParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathNegatedPropertySetContext ------------------------------------------------------------------

SPARQLParser::PathNegatedPropertySetContext::PathNegatedPropertySetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::PathOneInPropertySetContext *> SPARQLParser::PathNegatedPropertySetContext::pathOneInPropertySet() {
  return getRuleContexts<SPARQLParser::PathOneInPropertySetContext>();
}

SPARQLParser::PathOneInPropertySetContext* SPARQLParser::PathNegatedPropertySetContext::pathOneInPropertySet(size_t i) {
  return getRuleContext<SPARQLParser::PathOneInPropertySetContext>(i);
}


size_t SPARQLParser::PathNegatedPropertySetContext::getRuleIndex() const {
  return SPARQLParser::RulePathNegatedPropertySet;
}

void SPARQLParser::PathNegatedPropertySetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathNegatedPropertySet(this);
}

void SPARQLParser::PathNegatedPropertySetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathNegatedPropertySet(this);
}


antlrcpp::Any SPARQLParser::PathNegatedPropertySetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPathNegatedPropertySet(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PathNegatedPropertySetContext* SPARQLParser::pathNegatedPropertySet() {
  PathNegatedPropertySetContext *_localctx = _tracker.createInstance<PathNegatedPropertySetContext>(_ctx, getState());
  enterRule(_localctx, 196, SPARQLParser::RulePathNegatedPropertySet);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(993);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__9:
      case SPARQLParser::T__12:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 1);
        setState(980);
        pathOneInPropertySet();
        break;
      }

      case SPARQLParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(981);
        match(SPARQLParser::T__1);
        setState(990);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::T__9

        || _la == SPARQLParser::T__12 || ((((_la - 141) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
          | (1ULL << (SPARQLParser::PNAME_NS - 141))
          | (1ULL << (SPARQLParser::PNAME_LN - 141)))) != 0)) {
          setState(982);
          pathOneInPropertySet();
          setState(987);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SPARQLParser::T__10) {
            setState(983);
            match(SPARQLParser::T__10);
            setState(984);
            pathOneInPropertySet();
            setState(989);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(992);
        match(SPARQLParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathOneInPropertySetContext ------------------------------------------------------------------

SPARQLParser::PathOneInPropertySetContext::PathOneInPropertySetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::IriContext* SPARQLParser::PathOneInPropertySetContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}


size_t SPARQLParser::PathOneInPropertySetContext::getRuleIndex() const {
  return SPARQLParser::RulePathOneInPropertySet;
}

void SPARQLParser::PathOneInPropertySetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPathOneInPropertySet(this);
}

void SPARQLParser::PathOneInPropertySetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPathOneInPropertySet(this);
}


antlrcpp::Any SPARQLParser::PathOneInPropertySetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPathOneInPropertySet(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PathOneInPropertySetContext* SPARQLParser::pathOneInPropertySet() {
  PathOneInPropertySetContext *_localctx = _tracker.createInstance<PathOneInPropertySetContext>(_ctx, getState());
  enterRule(_localctx, 198, SPARQLParser::RulePathOneInPropertySet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1002);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 1);
        setState(995);
        iri();
        break;
      }

      case SPARQLParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(996);
        match(SPARQLParser::T__9);
        break;
      }

      case SPARQLParser::T__12: {
        enterOuterAlt(_localctx, 3);
        setState(997);
        match(SPARQLParser::T__12);
        setState(1000);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SPARQLParser::IRIREF:
          case SPARQLParser::PNAME_NS:
          case SPARQLParser::PNAME_LN: {
            setState(998);
            iri();
            break;
          }

          case SPARQLParser::T__9: {
            setState(999);
            match(SPARQLParser::T__9);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriplesNodeContext ------------------------------------------------------------------

SPARQLParser::TriplesNodeContext::TriplesNodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::CollectionContext* SPARQLParser::TriplesNodeContext::collection() {
  return getRuleContext<SPARQLParser::CollectionContext>(0);
}

SPARQLParser::BlankNodepropertyListContext* SPARQLParser::TriplesNodeContext::blankNodepropertyList() {
  return getRuleContext<SPARQLParser::BlankNodepropertyListContext>(0);
}


size_t SPARQLParser::TriplesNodeContext::getRuleIndex() const {
  return SPARQLParser::RuleTriplesNode;
}

void SPARQLParser::TriplesNodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTriplesNode(this);
}

void SPARQLParser::TriplesNodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTriplesNode(this);
}


antlrcpp::Any SPARQLParser::TriplesNodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitTriplesNode(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::TriplesNodeContext* SPARQLParser::triplesNode() {
  TriplesNodeContext *_localctx = _tracker.createInstance<TriplesNodeContext>(_ctx, getState());
  enterRule(_localctx, 200, SPARQLParser::RuleTriplesNode);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1006);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(1004);
        collection();
        break;
      }

      case SPARQLParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(1005);
        blankNodepropertyList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlankNodepropertyListContext ------------------------------------------------------------------

SPARQLParser::BlankNodepropertyListContext::BlankNodepropertyListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PropertyListNotEmptyContext* SPARQLParser::BlankNodepropertyListContext::propertyListNotEmpty() {
  return getRuleContext<SPARQLParser::PropertyListNotEmptyContext>(0);
}


size_t SPARQLParser::BlankNodepropertyListContext::getRuleIndex() const {
  return SPARQLParser::RuleBlankNodepropertyList;
}

void SPARQLParser::BlankNodepropertyListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlankNodepropertyList(this);
}

void SPARQLParser::BlankNodepropertyListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlankNodepropertyList(this);
}


antlrcpp::Any SPARQLParser::BlankNodepropertyListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitBlankNodepropertyList(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::BlankNodepropertyListContext* SPARQLParser::blankNodepropertyList() {
  BlankNodepropertyListContext *_localctx = _tracker.createInstance<BlankNodepropertyListContext>(_ctx, getState());
  enterRule(_localctx, 202, SPARQLParser::RuleBlankNodepropertyList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1008);
    match(SPARQLParser::T__16);
    setState(1009);
    propertyListNotEmpty();
    setState(1010);
    match(SPARQLParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriplesNodepathContext ------------------------------------------------------------------

SPARQLParser::TriplesNodepathContext::TriplesNodepathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::CollectionpathContext* SPARQLParser::TriplesNodepathContext::collectionpath() {
  return getRuleContext<SPARQLParser::CollectionpathContext>(0);
}

SPARQLParser::BlankNodepropertyListpathContext* SPARQLParser::TriplesNodepathContext::blankNodepropertyListpath() {
  return getRuleContext<SPARQLParser::BlankNodepropertyListpathContext>(0);
}


size_t SPARQLParser::TriplesNodepathContext::getRuleIndex() const {
  return SPARQLParser::RuleTriplesNodepath;
}

void SPARQLParser::TriplesNodepathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTriplesNodepath(this);
}

void SPARQLParser::TriplesNodepathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTriplesNodepath(this);
}


antlrcpp::Any SPARQLParser::TriplesNodepathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitTriplesNodepath(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::TriplesNodepathContext* SPARQLParser::triplesNodepath() {
  TriplesNodepathContext *_localctx = _tracker.createInstance<TriplesNodepathContext>(_ctx, getState());
  enterRule(_localctx, 204, SPARQLParser::RuleTriplesNodepath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1014);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(1012);
        collectionpath();
        break;
      }

      case SPARQLParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(1013);
        blankNodepropertyListpath();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlankNodepropertyListpathContext ------------------------------------------------------------------

SPARQLParser::BlankNodepropertyListpathContext::BlankNodepropertyListpathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PropertyListpathNotEmptyContext* SPARQLParser::BlankNodepropertyListpathContext::propertyListpathNotEmpty() {
  return getRuleContext<SPARQLParser::PropertyListpathNotEmptyContext>(0);
}


size_t SPARQLParser::BlankNodepropertyListpathContext::getRuleIndex() const {
  return SPARQLParser::RuleBlankNodepropertyListpath;
}

void SPARQLParser::BlankNodepropertyListpathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlankNodepropertyListpath(this);
}

void SPARQLParser::BlankNodepropertyListpathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlankNodepropertyListpath(this);
}


antlrcpp::Any SPARQLParser::BlankNodepropertyListpathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitBlankNodepropertyListpath(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::BlankNodepropertyListpathContext* SPARQLParser::blankNodepropertyListpath() {
  BlankNodepropertyListpathContext *_localctx = _tracker.createInstance<BlankNodepropertyListpathContext>(_ctx, getState());
  enterRule(_localctx, 206, SPARQLParser::RuleBlankNodepropertyListpath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1016);
    match(SPARQLParser::T__16);
    setState(1017);
    propertyListpathNotEmpty();
    setState(1018);
    match(SPARQLParser::T__17);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectionContext ------------------------------------------------------------------

SPARQLParser::CollectionContext::CollectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::GraphNodeContext *> SPARQLParser::CollectionContext::graphNode() {
  return getRuleContexts<SPARQLParser::GraphNodeContext>();
}

SPARQLParser::GraphNodeContext* SPARQLParser::CollectionContext::graphNode(size_t i) {
  return getRuleContext<SPARQLParser::GraphNodeContext>(i);
}


size_t SPARQLParser::CollectionContext::getRuleIndex() const {
  return SPARQLParser::RuleCollection;
}

void SPARQLParser::CollectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollection(this);
}

void SPARQLParser::CollectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollection(this);
}


antlrcpp::Any SPARQLParser::CollectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitCollection(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::CollectionContext* SPARQLParser::collection() {
  CollectionContext *_localctx = _tracker.createInstance<CollectionContext>(_ctx, getState());
  enterRule(_localctx, 208, SPARQLParser::RuleCollection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1020);
    match(SPARQLParser::T__1);
    setState(1022); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1021);
      graphNode();
      setState(1024); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::T__16)
      | (1ULL << SPARQLParser::T__28)
      | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
      | (1ULL << (SPARQLParser::PNAME_NS - 141))
      | (1ULL << (SPARQLParser::PNAME_LN - 141))
      | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
      | (1ULL << (SPARQLParser::VAR1 - 141))
      | (1ULL << (SPARQLParser::VAR2 - 141))
      | (1ULL << (SPARQLParser::INTEGER - 141))
      | (1ULL << (SPARQLParser::DECIMAL - 141))
      | (1ULL << (SPARQLParser::DOUBLE - 141))
      | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
      | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
      | (1ULL << (SPARQLParser::NIL - 141))
      | (1ULL << (SPARQLParser::ANON - 141)))) != 0));
    setState(1026);
    match(SPARQLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectionpathContext ------------------------------------------------------------------

SPARQLParser::CollectionpathContext::CollectionpathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::GraphNodepathContext *> SPARQLParser::CollectionpathContext::graphNodepath() {
  return getRuleContexts<SPARQLParser::GraphNodepathContext>();
}

SPARQLParser::GraphNodepathContext* SPARQLParser::CollectionpathContext::graphNodepath(size_t i) {
  return getRuleContext<SPARQLParser::GraphNodepathContext>(i);
}


size_t SPARQLParser::CollectionpathContext::getRuleIndex() const {
  return SPARQLParser::RuleCollectionpath;
}

void SPARQLParser::CollectionpathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollectionpath(this);
}

void SPARQLParser::CollectionpathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollectionpath(this);
}


antlrcpp::Any SPARQLParser::CollectionpathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitCollectionpath(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::CollectionpathContext* SPARQLParser::collectionpath() {
  CollectionpathContext *_localctx = _tracker.createInstance<CollectionpathContext>(_ctx, getState());
  enterRule(_localctx, 210, SPARQLParser::RuleCollectionpath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1028);
    match(SPARQLParser::T__1);
    setState(1030); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(1029);
      graphNodepath();
      setState(1032); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SPARQLParser::T__1)
      | (1ULL << SPARQLParser::T__16)
      | (1ULL << SPARQLParser::T__28)
      | (1ULL << SPARQLParser::T__29))) != 0) || ((((_la - 141) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 141)) & ((1ULL << (SPARQLParser::IRIREF - 141))
      | (1ULL << (SPARQLParser::PNAME_NS - 141))
      | (1ULL << (SPARQLParser::PNAME_LN - 141))
      | (1ULL << (SPARQLParser::BLANK_NODE_LABEL - 141))
      | (1ULL << (SPARQLParser::VAR1 - 141))
      | (1ULL << (SPARQLParser::VAR2 - 141))
      | (1ULL << (SPARQLParser::INTEGER - 141))
      | (1ULL << (SPARQLParser::DECIMAL - 141))
      | (1ULL << (SPARQLParser::DOUBLE - 141))
      | (1ULL << (SPARQLParser::INTEGER_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 141))
      | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL2 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 141))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 141))
      | (1ULL << (SPARQLParser::NIL - 141))
      | (1ULL << (SPARQLParser::ANON - 141)))) != 0));
    setState(1034);
    match(SPARQLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphNodeContext ------------------------------------------------------------------

SPARQLParser::GraphNodeContext::GraphNodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::VarOrTermContext* SPARQLParser::GraphNodeContext::varOrTerm() {
  return getRuleContext<SPARQLParser::VarOrTermContext>(0);
}

SPARQLParser::TriplesNodeContext* SPARQLParser::GraphNodeContext::triplesNode() {
  return getRuleContext<SPARQLParser::TriplesNodeContext>(0);
}


size_t SPARQLParser::GraphNodeContext::getRuleIndex() const {
  return SPARQLParser::RuleGraphNode;
}

void SPARQLParser::GraphNodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGraphNode(this);
}

void SPARQLParser::GraphNodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGraphNode(this);
}


antlrcpp::Any SPARQLParser::GraphNodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGraphNode(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GraphNodeContext* SPARQLParser::graphNode() {
  GraphNodeContext *_localctx = _tracker.createInstance<GraphNodeContext>(_ctx, getState());
  enterRule(_localctx, 212, SPARQLParser::RuleGraphNode);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1038);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__28:
      case SPARQLParser::T__29:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::BLANK_NODE_LABEL:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2:
      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE:
      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2:
      case SPARQLParser::NIL:
      case SPARQLParser::ANON: {
        enterOuterAlt(_localctx, 1);
        setState(1036);
        varOrTerm();
        break;
      }

      case SPARQLParser::T__1:
      case SPARQLParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(1037);
        triplesNode();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphNodepathContext ------------------------------------------------------------------

SPARQLParser::GraphNodepathContext::GraphNodepathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::VarOrTermContext* SPARQLParser::GraphNodepathContext::varOrTerm() {
  return getRuleContext<SPARQLParser::VarOrTermContext>(0);
}

SPARQLParser::TriplesNodepathContext* SPARQLParser::GraphNodepathContext::triplesNodepath() {
  return getRuleContext<SPARQLParser::TriplesNodepathContext>(0);
}


size_t SPARQLParser::GraphNodepathContext::getRuleIndex() const {
  return SPARQLParser::RuleGraphNodepath;
}

void SPARQLParser::GraphNodepathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGraphNodepath(this);
}

void SPARQLParser::GraphNodepathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGraphNodepath(this);
}


antlrcpp::Any SPARQLParser::GraphNodepathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGraphNodepath(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GraphNodepathContext* SPARQLParser::graphNodepath() {
  GraphNodepathContext *_localctx = _tracker.createInstance<GraphNodepathContext>(_ctx, getState());
  enterRule(_localctx, 214, SPARQLParser::RuleGraphNodepath);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1042);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__28:
      case SPARQLParser::T__29:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::BLANK_NODE_LABEL:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2:
      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE:
      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2:
      case SPARQLParser::NIL:
      case SPARQLParser::ANON: {
        enterOuterAlt(_localctx, 1);
        setState(1040);
        varOrTerm();
        break;
      }

      case SPARQLParser::T__1:
      case SPARQLParser::T__16: {
        enterOuterAlt(_localctx, 2);
        setState(1041);
        triplesNodepath();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarOrTermContext ------------------------------------------------------------------

SPARQLParser::VarOrTermContext::VarOrTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::VarContext* SPARQLParser::VarOrTermContext::var() {
  return getRuleContext<SPARQLParser::VarContext>(0);
}

SPARQLParser::GraphTermContext* SPARQLParser::VarOrTermContext::graphTerm() {
  return getRuleContext<SPARQLParser::GraphTermContext>(0);
}


size_t SPARQLParser::VarOrTermContext::getRuleIndex() const {
  return SPARQLParser::RuleVarOrTerm;
}

void SPARQLParser::VarOrTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarOrTerm(this);
}

void SPARQLParser::VarOrTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarOrTerm(this);
}


antlrcpp::Any SPARQLParser::VarOrTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitVarOrTerm(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::VarOrTermContext* SPARQLParser::varOrTerm() {
  VarOrTermContext *_localctx = _tracker.createInstance<VarOrTermContext>(_ctx, getState());
  enterRule(_localctx, 216, SPARQLParser::RuleVarOrTerm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1046);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2: {
        enterOuterAlt(_localctx, 1);
        setState(1044);
        var();
        break;
      }

      case SPARQLParser::T__28:
      case SPARQLParser::T__29:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::BLANK_NODE_LABEL:
      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE:
      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2:
      case SPARQLParser::NIL:
      case SPARQLParser::ANON: {
        enterOuterAlt(_localctx, 2);
        setState(1045);
        graphTerm();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarOrIriContext ------------------------------------------------------------------

SPARQLParser::VarOrIriContext::VarOrIriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::VarContext* SPARQLParser::VarOrIriContext::var() {
  return getRuleContext<SPARQLParser::VarContext>(0);
}

SPARQLParser::IriContext* SPARQLParser::VarOrIriContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}


size_t SPARQLParser::VarOrIriContext::getRuleIndex() const {
  return SPARQLParser::RuleVarOrIri;
}

void SPARQLParser::VarOrIriContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarOrIri(this);
}

void SPARQLParser::VarOrIriContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarOrIri(this);
}


antlrcpp::Any SPARQLParser::VarOrIriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitVarOrIri(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::VarOrIriContext* SPARQLParser::varOrIri() {
  VarOrIriContext *_localctx = _tracker.createInstance<VarOrIriContext>(_ctx, getState());
  enterRule(_localctx, 218, SPARQLParser::RuleVarOrIri);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1050);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2: {
        enterOuterAlt(_localctx, 1);
        setState(1048);
        var();
        break;
      }

      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 2);
        setState(1049);
        iri();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

SPARQLParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::VarContext::VAR1() {
  return getToken(SPARQLParser::VAR1, 0);
}

tree::TerminalNode* SPARQLParser::VarContext::VAR2() {
  return getToken(SPARQLParser::VAR2, 0);
}


size_t SPARQLParser::VarContext::getRuleIndex() const {
  return SPARQLParser::RuleVar;
}

void SPARQLParser::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void SPARQLParser::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}


antlrcpp::Any SPARQLParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::VarContext* SPARQLParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 220, SPARQLParser::RuleVar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1052);
    _la = _input->LA(1);
    if (!(_la == SPARQLParser::VAR1

    || _la == SPARQLParser::VAR2)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GraphTermContext ------------------------------------------------------------------

SPARQLParser::GraphTermContext::GraphTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::IriContext* SPARQLParser::GraphTermContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}

SPARQLParser::RDFLiteralContext* SPARQLParser::GraphTermContext::rDFLiteral() {
  return getRuleContext<SPARQLParser::RDFLiteralContext>(0);
}

SPARQLParser::NumericLiteralContext* SPARQLParser::GraphTermContext::numericLiteral() {
  return getRuleContext<SPARQLParser::NumericLiteralContext>(0);
}

SPARQLParser::BooleanLiteralContext* SPARQLParser::GraphTermContext::booleanLiteral() {
  return getRuleContext<SPARQLParser::BooleanLiteralContext>(0);
}

SPARQLParser::BlankNodeContext* SPARQLParser::GraphTermContext::blankNode() {
  return getRuleContext<SPARQLParser::BlankNodeContext>(0);
}

tree::TerminalNode* SPARQLParser::GraphTermContext::NIL() {
  return getToken(SPARQLParser::NIL, 0);
}


size_t SPARQLParser::GraphTermContext::getRuleIndex() const {
  return SPARQLParser::RuleGraphTerm;
}

void SPARQLParser::GraphTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGraphTerm(this);
}

void SPARQLParser::GraphTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGraphTerm(this);
}


antlrcpp::Any SPARQLParser::GraphTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitGraphTerm(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::GraphTermContext* SPARQLParser::graphTerm() {
  GraphTermContext *_localctx = _tracker.createInstance<GraphTermContext>(_ctx, getState());
  enterRule(_localctx, 222, SPARQLParser::RuleGraphTerm);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1060);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 1);
        setState(1054);
        iri();
        break;
      }

      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2: {
        enterOuterAlt(_localctx, 2);
        setState(1055);
        rDFLiteral();
        break;
      }

      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE: {
        enterOuterAlt(_localctx, 3);
        setState(1056);
        numericLiteral();
        break;
      }

      case SPARQLParser::T__28:
      case SPARQLParser::T__29: {
        enterOuterAlt(_localctx, 4);
        setState(1057);
        booleanLiteral();
        break;
      }

      case SPARQLParser::BLANK_NODE_LABEL:
      case SPARQLParser::ANON: {
        enterOuterAlt(_localctx, 5);
        setState(1058);
        blankNode();
        break;
      }

      case SPARQLParser::NIL: {
        enterOuterAlt(_localctx, 6);
        setState(1059);
        match(SPARQLParser::NIL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

SPARQLParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::ConditionalOrexpressionContext* SPARQLParser::ExpressionContext::conditionalOrexpression() {
  return getRuleContext<SPARQLParser::ConditionalOrexpressionContext>(0);
}


size_t SPARQLParser::ExpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleExpression;
}

void SPARQLParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void SPARQLParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


antlrcpp::Any SPARQLParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ExpressionContext* SPARQLParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 224, SPARQLParser::RuleExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1062);
    conditionalOrexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalOrexpressionContext ------------------------------------------------------------------

SPARQLParser::ConditionalOrexpressionContext::ConditionalOrexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::ConditionalAndexpressionContext *> SPARQLParser::ConditionalOrexpressionContext::conditionalAndexpression() {
  return getRuleContexts<SPARQLParser::ConditionalAndexpressionContext>();
}

SPARQLParser::ConditionalAndexpressionContext* SPARQLParser::ConditionalOrexpressionContext::conditionalAndexpression(size_t i) {
  return getRuleContext<SPARQLParser::ConditionalAndexpressionContext>(i);
}


size_t SPARQLParser::ConditionalOrexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleConditionalOrexpression;
}

void SPARQLParser::ConditionalOrexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalOrexpression(this);
}

void SPARQLParser::ConditionalOrexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalOrexpression(this);
}


antlrcpp::Any SPARQLParser::ConditionalOrexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitConditionalOrexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ConditionalOrexpressionContext* SPARQLParser::conditionalOrexpression() {
  ConditionalOrexpressionContext *_localctx = _tracker.createInstance<ConditionalOrexpressionContext>(_ctx, getState());
  enterRule(_localctx, 226, SPARQLParser::RuleConditionalOrexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1064);
    conditionalAndexpression();
    setState(1069);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__18) {
      setState(1065);
      match(SPARQLParser::T__18);
      setState(1066);
      conditionalAndexpression();
      setState(1071);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionalAndexpressionContext ------------------------------------------------------------------

SPARQLParser::ConditionalAndexpressionContext::ConditionalAndexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::ValueLogicalContext *> SPARQLParser::ConditionalAndexpressionContext::valueLogical() {
  return getRuleContexts<SPARQLParser::ValueLogicalContext>();
}

SPARQLParser::ValueLogicalContext* SPARQLParser::ConditionalAndexpressionContext::valueLogical(size_t i) {
  return getRuleContext<SPARQLParser::ValueLogicalContext>(i);
}


size_t SPARQLParser::ConditionalAndexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleConditionalAndexpression;
}

void SPARQLParser::ConditionalAndexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditionalAndexpression(this);
}

void SPARQLParser::ConditionalAndexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditionalAndexpression(this);
}


antlrcpp::Any SPARQLParser::ConditionalAndexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitConditionalAndexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ConditionalAndexpressionContext* SPARQLParser::conditionalAndexpression() {
  ConditionalAndexpressionContext *_localctx = _tracker.createInstance<ConditionalAndexpressionContext>(_ctx, getState());
  enterRule(_localctx, 228, SPARQLParser::RuleConditionalAndexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1072);
    valueLogical();
    setState(1077);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__19) {
      setState(1073);
      match(SPARQLParser::T__19);
      setState(1074);
      valueLogical();
      setState(1079);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueLogicalContext ------------------------------------------------------------------

SPARQLParser::ValueLogicalContext::ValueLogicalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::RelationalexpressionContext* SPARQLParser::ValueLogicalContext::relationalexpression() {
  return getRuleContext<SPARQLParser::RelationalexpressionContext>(0);
}


size_t SPARQLParser::ValueLogicalContext::getRuleIndex() const {
  return SPARQLParser::RuleValueLogical;
}

void SPARQLParser::ValueLogicalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueLogical(this);
}

void SPARQLParser::ValueLogicalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueLogical(this);
}


antlrcpp::Any SPARQLParser::ValueLogicalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitValueLogical(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ValueLogicalContext* SPARQLParser::valueLogical() {
  ValueLogicalContext *_localctx = _tracker.createInstance<ValueLogicalContext>(_ctx, getState());
  enterRule(_localctx, 230, SPARQLParser::RuleValueLogical);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1080);
    relationalexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelationalexpressionContext ------------------------------------------------------------------

SPARQLParser::RelationalexpressionContext::RelationalexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::NumericexpressionContext *> SPARQLParser::RelationalexpressionContext::numericexpression() {
  return getRuleContexts<SPARQLParser::NumericexpressionContext>();
}

SPARQLParser::NumericexpressionContext* SPARQLParser::RelationalexpressionContext::numericexpression(size_t i) {
  return getRuleContext<SPARQLParser::NumericexpressionContext>(i);
}

tree::TerminalNode* SPARQLParser::RelationalexpressionContext::K_IN() {
  return getToken(SPARQLParser::K_IN, 0);
}

SPARQLParser::ExpressionListContext* SPARQLParser::RelationalexpressionContext::expressionList() {
  return getRuleContext<SPARQLParser::ExpressionListContext>(0);
}

tree::TerminalNode* SPARQLParser::RelationalexpressionContext::K_NOT() {
  return getToken(SPARQLParser::K_NOT, 0);
}


size_t SPARQLParser::RelationalexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleRelationalexpression;
}

void SPARQLParser::RelationalexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelationalexpression(this);
}

void SPARQLParser::RelationalexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelationalexpression(this);
}


antlrcpp::Any SPARQLParser::RelationalexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitRelationalexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::RelationalexpressionContext* SPARQLParser::relationalexpression() {
  RelationalexpressionContext *_localctx = _tracker.createInstance<RelationalexpressionContext>(_ctx, getState());
  enterRule(_localctx, 232, SPARQLParser::RuleRelationalexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1082);
    numericexpression();
    setState(1100);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__20: {
        setState(1083);
        match(SPARQLParser::T__20);
        setState(1084);
        numericexpression();
        break;
      }

      case SPARQLParser::T__21: {
        setState(1085);
        match(SPARQLParser::T__21);
        setState(1086);
        numericexpression();
        break;
      }

      case SPARQLParser::T__22: {
        setState(1087);
        match(SPARQLParser::T__22);
        setState(1088);
        numericexpression();
        break;
      }

      case SPARQLParser::T__23: {
        setState(1089);
        match(SPARQLParser::T__23);
        setState(1090);
        numericexpression();
        break;
      }

      case SPARQLParser::T__24: {
        setState(1091);
        match(SPARQLParser::T__24);
        setState(1092);
        numericexpression();
        break;
      }

      case SPARQLParser::T__25: {
        setState(1093);
        match(SPARQLParser::T__25);
        setState(1094);
        numericexpression();
        break;
      }

      case SPARQLParser::K_IN: {
        setState(1095);
        match(SPARQLParser::K_IN);
        setState(1096);
        expressionList();
        break;
      }

      case SPARQLParser::K_NOT: {
        setState(1097);
        match(SPARQLParser::K_NOT);
        setState(1098);
        match(SPARQLParser::K_IN);
        setState(1099);
        expressionList();
        break;
      }

      case SPARQLParser::T__2:
      case SPARQLParser::T__5:
      case SPARQLParser::T__8:
      case SPARQLParser::T__18:
      case SPARQLParser::T__19:
      case SPARQLParser::K_AS: {
        break;
      }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericexpressionContext ------------------------------------------------------------------

SPARQLParser::NumericexpressionContext::NumericexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::AdditiveexpressionContext* SPARQLParser::NumericexpressionContext::additiveexpression() {
  return getRuleContext<SPARQLParser::AdditiveexpressionContext>(0);
}


size_t SPARQLParser::NumericexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleNumericexpression;
}

void SPARQLParser::NumericexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericexpression(this);
}

void SPARQLParser::NumericexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericexpression(this);
}


antlrcpp::Any SPARQLParser::NumericexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitNumericexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::NumericexpressionContext* SPARQLParser::numericexpression() {
  NumericexpressionContext *_localctx = _tracker.createInstance<NumericexpressionContext>(_ctx, getState());
  enterRule(_localctx, 234, SPARQLParser::RuleNumericexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1102);
    additiveexpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditiveexpressionContext ------------------------------------------------------------------

SPARQLParser::AdditiveexpressionContext::AdditiveexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::MultiplicativeexpressionContext *> SPARQLParser::AdditiveexpressionContext::multiplicativeexpression() {
  return getRuleContexts<SPARQLParser::MultiplicativeexpressionContext>();
}

SPARQLParser::MultiplicativeexpressionContext* SPARQLParser::AdditiveexpressionContext::multiplicativeexpression(size_t i) {
  return getRuleContext<SPARQLParser::MultiplicativeexpressionContext>(i);
}

std::vector<SPARQLParser::NumericLiteralPositiveContext *> SPARQLParser::AdditiveexpressionContext::numericLiteralPositive() {
  return getRuleContexts<SPARQLParser::NumericLiteralPositiveContext>();
}

SPARQLParser::NumericLiteralPositiveContext* SPARQLParser::AdditiveexpressionContext::numericLiteralPositive(size_t i) {
  return getRuleContext<SPARQLParser::NumericLiteralPositiveContext>(i);
}

std::vector<SPARQLParser::NumericLiteralNegativeContext *> SPARQLParser::AdditiveexpressionContext::numericLiteralNegative() {
  return getRuleContexts<SPARQLParser::NumericLiteralNegativeContext>();
}

SPARQLParser::NumericLiteralNegativeContext* SPARQLParser::AdditiveexpressionContext::numericLiteralNegative(size_t i) {
  return getRuleContext<SPARQLParser::NumericLiteralNegativeContext>(i);
}

std::vector<SPARQLParser::UnaryexpressionContext *> SPARQLParser::AdditiveexpressionContext::unaryexpression() {
  return getRuleContexts<SPARQLParser::UnaryexpressionContext>();
}

SPARQLParser::UnaryexpressionContext* SPARQLParser::AdditiveexpressionContext::unaryexpression(size_t i) {
  return getRuleContext<SPARQLParser::UnaryexpressionContext>(i);
}


size_t SPARQLParser::AdditiveexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleAdditiveexpression;
}

void SPARQLParser::AdditiveexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveexpression(this);
}

void SPARQLParser::AdditiveexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveexpression(this);
}


antlrcpp::Any SPARQLParser::AdditiveexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitAdditiveexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::AdditiveexpressionContext* SPARQLParser::additiveexpression() {
  AdditiveexpressionContext *_localctx = _tracker.createInstance<AdditiveexpressionContext>(_ctx, getState());
  enterRule(_localctx, 236, SPARQLParser::RuleAdditiveexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1104);
    multiplicativeexpression();
    setState(1124);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__14

    || _la == SPARQLParser::T__26 || ((((_la - 151) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 151)) & ((1ULL << (SPARQLParser::INTEGER_POSITIVE - 151))
      | (1ULL << (SPARQLParser::DECIMAL_POSITIVE - 151))
      | (1ULL << (SPARQLParser::DOUBLE_POSITIVE - 151))
      | (1ULL << (SPARQLParser::INTEGER_NEGATIVE - 151))
      | (1ULL << (SPARQLParser::DECIMAL_NEGATIVE - 151))
      | (1ULL << (SPARQLParser::DOUBLE_NEGATIVE - 151)))) != 0)) {
      setState(1122);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SPARQLParser::T__14: {
          setState(1105);
          match(SPARQLParser::T__14);
          setState(1106);
          multiplicativeexpression();
          break;
        }

        case SPARQLParser::T__26: {
          setState(1107);
          match(SPARQLParser::T__26);
          setState(1108);
          multiplicativeexpression();
          break;
        }

        case SPARQLParser::INTEGER_POSITIVE:
        case SPARQLParser::DECIMAL_POSITIVE:
        case SPARQLParser::DOUBLE_POSITIVE:
        case SPARQLParser::INTEGER_NEGATIVE:
        case SPARQLParser::DECIMAL_NEGATIVE:
        case SPARQLParser::DOUBLE_NEGATIVE: {
          setState(1111);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SPARQLParser::INTEGER_POSITIVE:
            case SPARQLParser::DECIMAL_POSITIVE:
            case SPARQLParser::DOUBLE_POSITIVE: {
              setState(1109);
              numericLiteralPositive();
              break;
            }

            case SPARQLParser::INTEGER_NEGATIVE:
            case SPARQLParser::DECIMAL_NEGATIVE:
            case SPARQLParser::DOUBLE_NEGATIVE: {
              setState(1110);
              numericLiteralNegative();
              break;
            }

          default:
            throw NoViableAltException(this);
          }
          setState(1119);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SPARQLParser::T__0

          || _la == SPARQLParser::T__11) {
            setState(1117);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
              case SPARQLParser::T__0: {
                setState(1113);
                match(SPARQLParser::T__0);
                setState(1114);
                unaryexpression();
                break;
              }

              case SPARQLParser::T__11: {
                setState(1115);
                match(SPARQLParser::T__11);
                setState(1116);
                unaryexpression();
                break;
              }

            default:
              throw NoViableAltException(this);
            }
            setState(1121);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1126);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeexpressionContext ------------------------------------------------------------------

SPARQLParser::MultiplicativeexpressionContext::MultiplicativeexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SPARQLParser::UnaryexpressionContext *> SPARQLParser::MultiplicativeexpressionContext::unaryexpression() {
  return getRuleContexts<SPARQLParser::UnaryexpressionContext>();
}

SPARQLParser::UnaryexpressionContext* SPARQLParser::MultiplicativeexpressionContext::unaryexpression(size_t i) {
  return getRuleContext<SPARQLParser::UnaryexpressionContext>(i);
}


size_t SPARQLParser::MultiplicativeexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleMultiplicativeexpression;
}

void SPARQLParser::MultiplicativeexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeexpression(this);
}

void SPARQLParser::MultiplicativeexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeexpression(this);
}


antlrcpp::Any SPARQLParser::MultiplicativeexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitMultiplicativeexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::MultiplicativeexpressionContext* SPARQLParser::multiplicativeexpression() {
  MultiplicativeexpressionContext *_localctx = _tracker.createInstance<MultiplicativeexpressionContext>(_ctx, getState());
  enterRule(_localctx, 238, SPARQLParser::RuleMultiplicativeexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1127);
    unaryexpression();
    setState(1134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SPARQLParser::T__0

    || _la == SPARQLParser::T__11) {
      setState(1132);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SPARQLParser::T__0: {
          setState(1128);
          match(SPARQLParser::T__0);
          setState(1129);
          unaryexpression();
          break;
        }

        case SPARQLParser::T__11: {
          setState(1130);
          match(SPARQLParser::T__11);
          setState(1131);
          unaryexpression();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryexpressionContext ------------------------------------------------------------------

SPARQLParser::UnaryexpressionContext::UnaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::PrimaryexpressionContext* SPARQLParser::UnaryexpressionContext::primaryexpression() {
  return getRuleContext<SPARQLParser::PrimaryexpressionContext>(0);
}


size_t SPARQLParser::UnaryexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleUnaryexpression;
}

void SPARQLParser::UnaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryexpression(this);
}

void SPARQLParser::UnaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryexpression(this);
}


antlrcpp::Any SPARQLParser::UnaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitUnaryexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::UnaryexpressionContext* SPARQLParser::unaryexpression() {
  UnaryexpressionContext *_localctx = _tracker.createInstance<UnaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 240, SPARQLParser::RuleUnaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1144);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__15: {
        enterOuterAlt(_localctx, 1);
        setState(1137);
        match(SPARQLParser::T__15);
        setState(1138);
        primaryexpression();
        break;
      }

      case SPARQLParser::T__14: {
        enterOuterAlt(_localctx, 2);
        setState(1139);
        match(SPARQLParser::T__14);
        setState(1140);
        primaryexpression();
        break;
      }

      case SPARQLParser::T__26: {
        enterOuterAlt(_localctx, 3);
        setState(1141);
        match(SPARQLParser::T__26);
        setState(1142);
        primaryexpression();
        break;
      }

      case SPARQLParser::T__1:
      case SPARQLParser::T__28:
      case SPARQLParser::T__29:
      case SPARQLParser::K_NOW:
      case SPARQLParser::K_YEAR:
      case SPARQLParser::K_IF:
      case SPARQLParser::K_CONCAT:
      case SPARQLParser::K_MONTH:
      case SPARQLParser::K_FLOOR:
      case SPARQLParser::K_TZ:
      case SPARQLParser::K_CEIL:
      case SPARQLParser::K_HOURS:
      case SPARQLParser::K_DATATYPE:
      case SPARQLParser::K_ISNUMERIC:
      case SPARQLParser::K_STRUUID:
      case SPARQLParser::K_BOUND:
      case SPARQLParser::K_TIMEZONE:
      case SPARQLParser::K_MIN:
      case SPARQLParser::K_ISBLANK:
      case SPARQLParser::K_UUID:
      case SPARQLParser::K_IRI:
      case SPARQLParser::K_BNODE:
      case SPARQLParser::K_AVG:
      case SPARQLParser::K_SAMPLE:
      case SPARQLParser::K_UCASE:
      case SPARQLParser::K_SAMETERM:
      case SPARQLParser::K_STRSTARTS:
      case SPARQLParser::K_STR:
      case SPARQLParser::K_COALESCE:
      case SPARQLParser::K_STRBEFORE:
      case SPARQLParser::K_ABS:
      case SPARQLParser::K_ISLITERAL:
      case SPARQLParser::K_STRAFTER:
      case SPARQLParser::K_STRLEN:
      case SPARQLParser::K_LANG:
      case SPARQLParser::K_MAX:
      case SPARQLParser::K_NOT:
      case SPARQLParser::K_STRENDS:
      case SPARQLParser::K_CONTAINS:
      case SPARQLParser::K_MINUTES:
      case SPARQLParser::K_REPLACE:
      case SPARQLParser::K_REGEX:
      case SPARQLParser::K_DAY:
      case SPARQLParser::K_STRLANG:
      case SPARQLParser::K_ROUND:
      case SPARQLParser::K_SECONDS:
      case SPARQLParser::K_URI:
      case SPARQLParser::K_EXISTS:
      case SPARQLParser::K_SUM:
      case SPARQLParser::K_LANGMATCHES:
      case SPARQLParser::K_ISURI:
      case SPARQLParser::K_ISIRI:
      case SPARQLParser::K_RAND:
      case SPARQLParser::K_STRDT:
      case SPARQLParser::K_COUNT:
      case SPARQLParser::K_LCASE:
      case SPARQLParser::K_SUBSTR:
      case SPARQLParser::KK_ENCODE_FOR_URI:
      case SPARQLParser::KK_MD5:
      case SPARQLParser::KK_SHA1:
      case SPARQLParser::KK_SHA256:
      case SPARQLParser::KK_SHA384:
      case SPARQLParser::KK_SHA512:
      case SPARQLParser::KK_GROUP_CONCAT:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2:
      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE:
      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2: {
        enterOuterAlt(_localctx, 4);
        setState(1143);
        primaryexpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryexpressionContext ------------------------------------------------------------------

SPARQLParser::PrimaryexpressionContext::PrimaryexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::BrackettedexpressionContext* SPARQLParser::PrimaryexpressionContext::brackettedexpression() {
  return getRuleContext<SPARQLParser::BrackettedexpressionContext>(0);
}

SPARQLParser::BuiltInCallContext* SPARQLParser::PrimaryexpressionContext::builtInCall() {
  return getRuleContext<SPARQLParser::BuiltInCallContext>(0);
}

SPARQLParser::IriOrFunctionContext* SPARQLParser::PrimaryexpressionContext::iriOrFunction() {
  return getRuleContext<SPARQLParser::IriOrFunctionContext>(0);
}

SPARQLParser::RDFLiteralContext* SPARQLParser::PrimaryexpressionContext::rDFLiteral() {
  return getRuleContext<SPARQLParser::RDFLiteralContext>(0);
}

SPARQLParser::NumericLiteralContext* SPARQLParser::PrimaryexpressionContext::numericLiteral() {
  return getRuleContext<SPARQLParser::NumericLiteralContext>(0);
}

SPARQLParser::BooleanLiteralContext* SPARQLParser::PrimaryexpressionContext::booleanLiteral() {
  return getRuleContext<SPARQLParser::BooleanLiteralContext>(0);
}

SPARQLParser::VarContext* SPARQLParser::PrimaryexpressionContext::var() {
  return getRuleContext<SPARQLParser::VarContext>(0);
}


size_t SPARQLParser::PrimaryexpressionContext::getRuleIndex() const {
  return SPARQLParser::RulePrimaryexpression;
}

void SPARQLParser::PrimaryexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryexpression(this);
}

void SPARQLParser::PrimaryexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryexpression(this);
}


antlrcpp::Any SPARQLParser::PrimaryexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPrimaryexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PrimaryexpressionContext* SPARQLParser::primaryexpression() {
  PrimaryexpressionContext *_localctx = _tracker.createInstance<PrimaryexpressionContext>(_ctx, getState());
  enterRule(_localctx, 242, SPARQLParser::RulePrimaryexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1153);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(1146);
        brackettedexpression();
        break;
      }

      case SPARQLParser::K_NOW:
      case SPARQLParser::K_YEAR:
      case SPARQLParser::K_IF:
      case SPARQLParser::K_CONCAT:
      case SPARQLParser::K_MONTH:
      case SPARQLParser::K_FLOOR:
      case SPARQLParser::K_TZ:
      case SPARQLParser::K_CEIL:
      case SPARQLParser::K_HOURS:
      case SPARQLParser::K_DATATYPE:
      case SPARQLParser::K_ISNUMERIC:
      case SPARQLParser::K_STRUUID:
      case SPARQLParser::K_BOUND:
      case SPARQLParser::K_TIMEZONE:
      case SPARQLParser::K_MIN:
      case SPARQLParser::K_ISBLANK:
      case SPARQLParser::K_UUID:
      case SPARQLParser::K_IRI:
      case SPARQLParser::K_BNODE:
      case SPARQLParser::K_AVG:
      case SPARQLParser::K_SAMPLE:
      case SPARQLParser::K_UCASE:
      case SPARQLParser::K_SAMETERM:
      case SPARQLParser::K_STRSTARTS:
      case SPARQLParser::K_STR:
      case SPARQLParser::K_COALESCE:
      case SPARQLParser::K_STRBEFORE:
      case SPARQLParser::K_ABS:
      case SPARQLParser::K_ISLITERAL:
      case SPARQLParser::K_STRAFTER:
      case SPARQLParser::K_STRLEN:
      case SPARQLParser::K_LANG:
      case SPARQLParser::K_MAX:
      case SPARQLParser::K_NOT:
      case SPARQLParser::K_STRENDS:
      case SPARQLParser::K_CONTAINS:
      case SPARQLParser::K_MINUTES:
      case SPARQLParser::K_REPLACE:
      case SPARQLParser::K_REGEX:
      case SPARQLParser::K_DAY:
      case SPARQLParser::K_STRLANG:
      case SPARQLParser::K_ROUND:
      case SPARQLParser::K_SECONDS:
      case SPARQLParser::K_URI:
      case SPARQLParser::K_EXISTS:
      case SPARQLParser::K_SUM:
      case SPARQLParser::K_LANGMATCHES:
      case SPARQLParser::K_ISURI:
      case SPARQLParser::K_ISIRI:
      case SPARQLParser::K_RAND:
      case SPARQLParser::K_STRDT:
      case SPARQLParser::K_COUNT:
      case SPARQLParser::K_LCASE:
      case SPARQLParser::K_SUBSTR:
      case SPARQLParser::KK_ENCODE_FOR_URI:
      case SPARQLParser::KK_MD5:
      case SPARQLParser::KK_SHA1:
      case SPARQLParser::KK_SHA256:
      case SPARQLParser::KK_SHA384:
      case SPARQLParser::KK_SHA512:
      case SPARQLParser::KK_GROUP_CONCAT: {
        enterOuterAlt(_localctx, 2);
        setState(1147);
        builtInCall();
        break;
      }

      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 3);
        setState(1148);
        iriOrFunction();
        break;
      }

      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2: {
        enterOuterAlt(_localctx, 4);
        setState(1149);
        rDFLiteral();
        break;
      }

      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE: {
        enterOuterAlt(_localctx, 5);
        setState(1150);
        numericLiteral();
        break;
      }

      case SPARQLParser::T__28:
      case SPARQLParser::T__29: {
        enterOuterAlt(_localctx, 6);
        setState(1151);
        booleanLiteral();
        break;
      }

      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2: {
        enterOuterAlt(_localctx, 7);
        setState(1152);
        var();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BrackettedexpressionContext ------------------------------------------------------------------

SPARQLParser::BrackettedexpressionContext::BrackettedexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::ExpressionContext* SPARQLParser::BrackettedexpressionContext::expression() {
  return getRuleContext<SPARQLParser::ExpressionContext>(0);
}


size_t SPARQLParser::BrackettedexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleBrackettedexpression;
}

void SPARQLParser::BrackettedexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBrackettedexpression(this);
}

void SPARQLParser::BrackettedexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBrackettedexpression(this);
}


antlrcpp::Any SPARQLParser::BrackettedexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitBrackettedexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::BrackettedexpressionContext* SPARQLParser::brackettedexpression() {
  BrackettedexpressionContext *_localctx = _tracker.createInstance<BrackettedexpressionContext>(_ctx, getState());
  enterRule(_localctx, 244, SPARQLParser::RuleBrackettedexpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1155);
    match(SPARQLParser::T__1);
    setState(1156);
    expression();
    setState(1157);
    match(SPARQLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuiltInCallContext ------------------------------------------------------------------

SPARQLParser::BuiltInCallContext::BuiltInCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::AggregateContext* SPARQLParser::BuiltInCallContext::aggregate() {
  return getRuleContext<SPARQLParser::AggregateContext>(0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_STR() {
  return getToken(SPARQLParser::K_STR, 0);
}

std::vector<SPARQLParser::ExpressionContext *> SPARQLParser::BuiltInCallContext::expression() {
  return getRuleContexts<SPARQLParser::ExpressionContext>();
}

SPARQLParser::ExpressionContext* SPARQLParser::BuiltInCallContext::expression(size_t i) {
  return getRuleContext<SPARQLParser::ExpressionContext>(i);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_LANG() {
  return getToken(SPARQLParser::K_LANG, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_LANGMATCHES() {
  return getToken(SPARQLParser::K_LANGMATCHES, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_DATATYPE() {
  return getToken(SPARQLParser::K_DATATYPE, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_BOUND() {
  return getToken(SPARQLParser::K_BOUND, 0);
}

SPARQLParser::VarContext* SPARQLParser::BuiltInCallContext::var() {
  return getRuleContext<SPARQLParser::VarContext>(0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_IRI() {
  return getToken(SPARQLParser::K_IRI, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_URI() {
  return getToken(SPARQLParser::K_URI, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_BNODE() {
  return getToken(SPARQLParser::K_BNODE, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::NIL() {
  return getToken(SPARQLParser::NIL, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_RAND() {
  return getToken(SPARQLParser::K_RAND, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_ABS() {
  return getToken(SPARQLParser::K_ABS, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_CEIL() {
  return getToken(SPARQLParser::K_CEIL, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_FLOOR() {
  return getToken(SPARQLParser::K_FLOOR, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_ROUND() {
  return getToken(SPARQLParser::K_ROUND, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_CONCAT() {
  return getToken(SPARQLParser::K_CONCAT, 0);
}

SPARQLParser::ExpressionListContext* SPARQLParser::BuiltInCallContext::expressionList() {
  return getRuleContext<SPARQLParser::ExpressionListContext>(0);
}

SPARQLParser::SubstringexpressionContext* SPARQLParser::BuiltInCallContext::substringexpression() {
  return getRuleContext<SPARQLParser::SubstringexpressionContext>(0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_STRLEN() {
  return getToken(SPARQLParser::K_STRLEN, 0);
}

SPARQLParser::StrReplaceexpressionContext* SPARQLParser::BuiltInCallContext::strReplaceexpression() {
  return getRuleContext<SPARQLParser::StrReplaceexpressionContext>(0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_UCASE() {
  return getToken(SPARQLParser::K_UCASE, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_LCASE() {
  return getToken(SPARQLParser::K_LCASE, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::KK_ENCODE_FOR_URI() {
  return getToken(SPARQLParser::KK_ENCODE_FOR_URI, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_CONTAINS() {
  return getToken(SPARQLParser::K_CONTAINS, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_STRSTARTS() {
  return getToken(SPARQLParser::K_STRSTARTS, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_STRENDS() {
  return getToken(SPARQLParser::K_STRENDS, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_STRBEFORE() {
  return getToken(SPARQLParser::K_STRBEFORE, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_STRAFTER() {
  return getToken(SPARQLParser::K_STRAFTER, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_YEAR() {
  return getToken(SPARQLParser::K_YEAR, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_MONTH() {
  return getToken(SPARQLParser::K_MONTH, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_DAY() {
  return getToken(SPARQLParser::K_DAY, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_HOURS() {
  return getToken(SPARQLParser::K_HOURS, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_MINUTES() {
  return getToken(SPARQLParser::K_MINUTES, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_SECONDS() {
  return getToken(SPARQLParser::K_SECONDS, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_TIMEZONE() {
  return getToken(SPARQLParser::K_TIMEZONE, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_TZ() {
  return getToken(SPARQLParser::K_TZ, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_NOW() {
  return getToken(SPARQLParser::K_NOW, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_UUID() {
  return getToken(SPARQLParser::K_UUID, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_STRUUID() {
  return getToken(SPARQLParser::K_STRUUID, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::KK_MD5() {
  return getToken(SPARQLParser::KK_MD5, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::KK_SHA1() {
  return getToken(SPARQLParser::KK_SHA1, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::KK_SHA256() {
  return getToken(SPARQLParser::KK_SHA256, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::KK_SHA384() {
  return getToken(SPARQLParser::KK_SHA384, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::KK_SHA512() {
  return getToken(SPARQLParser::KK_SHA512, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_COALESCE() {
  return getToken(SPARQLParser::K_COALESCE, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_IF() {
  return getToken(SPARQLParser::K_IF, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_STRLANG() {
  return getToken(SPARQLParser::K_STRLANG, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_STRDT() {
  return getToken(SPARQLParser::K_STRDT, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_SAMETERM() {
  return getToken(SPARQLParser::K_SAMETERM, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_ISIRI() {
  return getToken(SPARQLParser::K_ISIRI, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_ISURI() {
  return getToken(SPARQLParser::K_ISURI, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_ISBLANK() {
  return getToken(SPARQLParser::K_ISBLANK, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_ISLITERAL() {
  return getToken(SPARQLParser::K_ISLITERAL, 0);
}

tree::TerminalNode* SPARQLParser::BuiltInCallContext::K_ISNUMERIC() {
  return getToken(SPARQLParser::K_ISNUMERIC, 0);
}

SPARQLParser::RegexexpressionContext* SPARQLParser::BuiltInCallContext::regexexpression() {
  return getRuleContext<SPARQLParser::RegexexpressionContext>(0);
}

SPARQLParser::ExistsFuncContext* SPARQLParser::BuiltInCallContext::existsFunc() {
  return getRuleContext<SPARQLParser::ExistsFuncContext>(0);
}

SPARQLParser::NotexistsFuncContext* SPARQLParser::BuiltInCallContext::notexistsFunc() {
  return getRuleContext<SPARQLParser::NotexistsFuncContext>(0);
}


size_t SPARQLParser::BuiltInCallContext::getRuleIndex() const {
  return SPARQLParser::RuleBuiltInCall;
}

void SPARQLParser::BuiltInCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuiltInCall(this);
}

void SPARQLParser::BuiltInCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuiltInCall(this);
}


antlrcpp::Any SPARQLParser::BuiltInCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitBuiltInCall(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::BuiltInCallContext* SPARQLParser::builtInCall() {
  BuiltInCallContext *_localctx = _tracker.createInstance<BuiltInCallContext>(_ctx, getState());
  enterRule(_localctx, 246, SPARQLParser::RuleBuiltInCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1417);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_MIN:
      case SPARQLParser::K_AVG:
      case SPARQLParser::K_SAMPLE:
      case SPARQLParser::K_MAX:
      case SPARQLParser::K_SUM:
      case SPARQLParser::K_COUNT:
      case SPARQLParser::KK_GROUP_CONCAT: {
        enterOuterAlt(_localctx, 1);
        setState(1159);
        aggregate();
        break;
      }

      case SPARQLParser::K_STR: {
        enterOuterAlt(_localctx, 2);
        setState(1160);
        match(SPARQLParser::K_STR);
        setState(1161);
        match(SPARQLParser::T__1);
        setState(1162);
        expression();
        setState(1163);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_LANG: {
        enterOuterAlt(_localctx, 3);
        setState(1165);
        match(SPARQLParser::K_LANG);
        setState(1166);
        match(SPARQLParser::T__1);
        setState(1167);
        expression();
        setState(1168);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_LANGMATCHES: {
        enterOuterAlt(_localctx, 4);
        setState(1170);
        match(SPARQLParser::K_LANGMATCHES);
        setState(1171);
        match(SPARQLParser::T__1);
        setState(1172);
        expression();
        setState(1173);
        match(SPARQLParser::T__8);
        setState(1174);
        expression();
        setState(1175);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_DATATYPE: {
        enterOuterAlt(_localctx, 5);
        setState(1177);
        match(SPARQLParser::K_DATATYPE);
        setState(1178);
        match(SPARQLParser::T__1);
        setState(1179);
        expression();
        setState(1180);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_BOUND: {
        enterOuterAlt(_localctx, 6);
        setState(1182);
        match(SPARQLParser::K_BOUND);
        setState(1183);
        match(SPARQLParser::T__1);
        setState(1184);
        var();
        setState(1185);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_IRI: {
        enterOuterAlt(_localctx, 7);
        setState(1187);
        match(SPARQLParser::K_IRI);
        setState(1188);
        match(SPARQLParser::T__1);
        setState(1189);
        expression();
        setState(1190);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_URI: {
        enterOuterAlt(_localctx, 8);
        setState(1192);
        match(SPARQLParser::K_URI);
        setState(1193);
        match(SPARQLParser::T__1);
        setState(1194);
        expression();
        setState(1195);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_BNODE: {
        enterOuterAlt(_localctx, 9);
        setState(1197);
        match(SPARQLParser::K_BNODE);
        setState(1203);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SPARQLParser::T__1: {
            setState(1198);
            match(SPARQLParser::T__1);
            setState(1199);
            expression();
            setState(1200);
            match(SPARQLParser::T__2);
            break;
          }

          case SPARQLParser::NIL: {
            setState(1202);
            match(SPARQLParser::NIL);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        break;
      }

      case SPARQLParser::K_RAND: {
        enterOuterAlt(_localctx, 10);
        setState(1205);
        match(SPARQLParser::K_RAND);
        setState(1206);
        match(SPARQLParser::NIL);
        break;
      }

      case SPARQLParser::K_ABS: {
        enterOuterAlt(_localctx, 11);
        setState(1207);
        match(SPARQLParser::K_ABS);
        setState(1208);
        match(SPARQLParser::T__1);
        setState(1209);
        expression();
        setState(1210);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_CEIL: {
        enterOuterAlt(_localctx, 12);
        setState(1212);
        match(SPARQLParser::K_CEIL);
        setState(1213);
        match(SPARQLParser::T__1);
        setState(1214);
        expression();
        setState(1215);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_FLOOR: {
        enterOuterAlt(_localctx, 13);
        setState(1217);
        match(SPARQLParser::K_FLOOR);
        setState(1218);
        match(SPARQLParser::T__1);
        setState(1219);
        expression();
        setState(1220);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_ROUND: {
        enterOuterAlt(_localctx, 14);
        setState(1222);
        match(SPARQLParser::K_ROUND);
        setState(1223);
        match(SPARQLParser::T__1);
        setState(1224);
        expression();
        setState(1225);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_CONCAT: {
        enterOuterAlt(_localctx, 15);
        setState(1227);
        match(SPARQLParser::K_CONCAT);
        setState(1228);
        expressionList();
        break;
      }

      case SPARQLParser::K_SUBSTR: {
        enterOuterAlt(_localctx, 16);
        setState(1229);
        substringexpression();
        break;
      }

      case SPARQLParser::K_STRLEN: {
        enterOuterAlt(_localctx, 17);
        setState(1230);
        match(SPARQLParser::K_STRLEN);
        setState(1231);
        match(SPARQLParser::T__1);
        setState(1232);
        expression();
        setState(1233);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_REPLACE: {
        enterOuterAlt(_localctx, 18);
        setState(1235);
        strReplaceexpression();
        break;
      }

      case SPARQLParser::K_UCASE: {
        enterOuterAlt(_localctx, 19);
        setState(1236);
        match(SPARQLParser::K_UCASE);
        setState(1237);
        match(SPARQLParser::T__1);
        setState(1238);
        expression();
        setState(1239);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_LCASE: {
        enterOuterAlt(_localctx, 20);
        setState(1241);
        match(SPARQLParser::K_LCASE);
        setState(1242);
        match(SPARQLParser::T__1);
        setState(1243);
        expression();
        setState(1244);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::KK_ENCODE_FOR_URI: {
        enterOuterAlt(_localctx, 21);
        setState(1246);
        match(SPARQLParser::KK_ENCODE_FOR_URI);
        setState(1247);
        match(SPARQLParser::T__1);
        setState(1248);
        expression();
        setState(1249);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_CONTAINS: {
        enterOuterAlt(_localctx, 22);
        setState(1251);
        match(SPARQLParser::K_CONTAINS);
        setState(1252);
        match(SPARQLParser::T__1);
        setState(1253);
        expression();
        setState(1254);
        match(SPARQLParser::T__8);
        setState(1255);
        expression();
        setState(1256);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_STRSTARTS: {
        enterOuterAlt(_localctx, 23);
        setState(1258);
        match(SPARQLParser::K_STRSTARTS);
        setState(1259);
        match(SPARQLParser::T__1);
        setState(1260);
        expression();
        setState(1261);
        match(SPARQLParser::T__8);
        setState(1262);
        expression();
        setState(1263);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_STRENDS: {
        enterOuterAlt(_localctx, 24);
        setState(1265);
        match(SPARQLParser::K_STRENDS);
        setState(1266);
        match(SPARQLParser::T__1);
        setState(1267);
        expression();
        setState(1268);
        match(SPARQLParser::T__8);
        setState(1269);
        expression();
        setState(1270);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_STRBEFORE: {
        enterOuterAlt(_localctx, 25);
        setState(1272);
        match(SPARQLParser::K_STRBEFORE);
        setState(1273);
        match(SPARQLParser::T__1);
        setState(1274);
        expression();
        setState(1275);
        match(SPARQLParser::T__8);
        setState(1276);
        expression();
        setState(1277);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_STRAFTER: {
        enterOuterAlt(_localctx, 26);
        setState(1279);
        match(SPARQLParser::K_STRAFTER);
        setState(1280);
        match(SPARQLParser::T__1);
        setState(1281);
        expression();
        setState(1282);
        match(SPARQLParser::T__8);
        setState(1283);
        expression();
        setState(1284);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_YEAR: {
        enterOuterAlt(_localctx, 27);
        setState(1286);
        match(SPARQLParser::K_YEAR);
        setState(1287);
        match(SPARQLParser::T__1);
        setState(1288);
        expression();
        setState(1289);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_MONTH: {
        enterOuterAlt(_localctx, 28);
        setState(1291);
        match(SPARQLParser::K_MONTH);
        setState(1292);
        match(SPARQLParser::T__1);
        setState(1293);
        expression();
        setState(1294);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_DAY: {
        enterOuterAlt(_localctx, 29);
        setState(1296);
        match(SPARQLParser::K_DAY);
        setState(1297);
        match(SPARQLParser::T__1);
        setState(1298);
        expression();
        setState(1299);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_HOURS: {
        enterOuterAlt(_localctx, 30);
        setState(1301);
        match(SPARQLParser::K_HOURS);
        setState(1302);
        match(SPARQLParser::T__1);
        setState(1303);
        expression();
        setState(1304);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_MINUTES: {
        enterOuterAlt(_localctx, 31);
        setState(1306);
        match(SPARQLParser::K_MINUTES);
        setState(1307);
        match(SPARQLParser::T__1);
        setState(1308);
        expression();
        setState(1309);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_SECONDS: {
        enterOuterAlt(_localctx, 32);
        setState(1311);
        match(SPARQLParser::K_SECONDS);
        setState(1312);
        match(SPARQLParser::T__1);
        setState(1313);
        expression();
        setState(1314);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_TIMEZONE: {
        enterOuterAlt(_localctx, 33);
        setState(1316);
        match(SPARQLParser::K_TIMEZONE);
        setState(1317);
        match(SPARQLParser::T__1);
        setState(1318);
        expression();
        setState(1319);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_TZ: {
        enterOuterAlt(_localctx, 34);
        setState(1321);
        match(SPARQLParser::K_TZ);
        setState(1322);
        match(SPARQLParser::T__1);
        setState(1323);
        expression();
        setState(1324);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_NOW: {
        enterOuterAlt(_localctx, 35);
        setState(1326);
        match(SPARQLParser::K_NOW);
        setState(1327);
        match(SPARQLParser::NIL);
        break;
      }

      case SPARQLParser::K_UUID: {
        enterOuterAlt(_localctx, 36);
        setState(1328);
        match(SPARQLParser::K_UUID);
        setState(1329);
        match(SPARQLParser::NIL);
        break;
      }

      case SPARQLParser::K_STRUUID: {
        enterOuterAlt(_localctx, 37);
        setState(1330);
        match(SPARQLParser::K_STRUUID);
        setState(1331);
        match(SPARQLParser::NIL);
        break;
      }

      case SPARQLParser::KK_MD5: {
        enterOuterAlt(_localctx, 38);
        setState(1332);
        match(SPARQLParser::KK_MD5);
        setState(1333);
        match(SPARQLParser::T__1);
        setState(1334);
        expression();
        setState(1335);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::KK_SHA1: {
        enterOuterAlt(_localctx, 39);
        setState(1337);
        match(SPARQLParser::KK_SHA1);
        setState(1338);
        match(SPARQLParser::T__1);
        setState(1339);
        expression();
        setState(1340);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::KK_SHA256: {
        enterOuterAlt(_localctx, 40);
        setState(1342);
        match(SPARQLParser::KK_SHA256);
        setState(1343);
        match(SPARQLParser::T__1);
        setState(1344);
        expression();
        setState(1345);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::KK_SHA384: {
        enterOuterAlt(_localctx, 41);
        setState(1347);
        match(SPARQLParser::KK_SHA384);
        setState(1348);
        match(SPARQLParser::T__1);
        setState(1349);
        expression();
        setState(1350);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::KK_SHA512: {
        enterOuterAlt(_localctx, 42);
        setState(1352);
        match(SPARQLParser::KK_SHA512);
        setState(1353);
        match(SPARQLParser::T__1);
        setState(1354);
        expression();
        setState(1355);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_COALESCE: {
        enterOuterAlt(_localctx, 43);
        setState(1357);
        match(SPARQLParser::K_COALESCE);
        setState(1358);
        expressionList();
        break;
      }

      case SPARQLParser::K_IF: {
        enterOuterAlt(_localctx, 44);
        setState(1359);
        match(SPARQLParser::K_IF);
        setState(1360);
        match(SPARQLParser::T__1);
        setState(1361);
        expression();
        setState(1362);
        match(SPARQLParser::T__8);
        setState(1363);
        expression();
        setState(1364);
        match(SPARQLParser::T__8);
        setState(1365);
        expression();
        setState(1366);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_STRLANG: {
        enterOuterAlt(_localctx, 45);
        setState(1368);
        match(SPARQLParser::K_STRLANG);
        setState(1369);
        match(SPARQLParser::T__1);
        setState(1370);
        expression();
        setState(1371);
        match(SPARQLParser::T__8);
        setState(1372);
        expression();
        setState(1373);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_STRDT: {
        enterOuterAlt(_localctx, 46);
        setState(1375);
        match(SPARQLParser::K_STRDT);
        setState(1376);
        match(SPARQLParser::T__1);
        setState(1377);
        expression();
        setState(1378);
        match(SPARQLParser::T__8);
        setState(1379);
        expression();
        setState(1380);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_SAMETERM: {
        enterOuterAlt(_localctx, 47);
        setState(1382);
        match(SPARQLParser::K_SAMETERM);
        setState(1383);
        match(SPARQLParser::T__1);
        setState(1384);
        expression();
        setState(1385);
        match(SPARQLParser::T__8);
        setState(1386);
        expression();
        setState(1387);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_ISIRI: {
        enterOuterAlt(_localctx, 48);
        setState(1389);
        match(SPARQLParser::K_ISIRI);
        setState(1390);
        match(SPARQLParser::T__1);
        setState(1391);
        expression();
        setState(1392);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_ISURI: {
        enterOuterAlt(_localctx, 49);
        setState(1394);
        match(SPARQLParser::K_ISURI);
        setState(1395);
        match(SPARQLParser::T__1);
        setState(1396);
        expression();
        setState(1397);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_ISBLANK: {
        enterOuterAlt(_localctx, 50);
        setState(1399);
        match(SPARQLParser::K_ISBLANK);
        setState(1400);
        match(SPARQLParser::T__1);
        setState(1401);
        expression();
        setState(1402);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_ISLITERAL: {
        enterOuterAlt(_localctx, 51);
        setState(1404);
        match(SPARQLParser::K_ISLITERAL);
        setState(1405);
        match(SPARQLParser::T__1);
        setState(1406);
        expression();
        setState(1407);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_ISNUMERIC: {
        enterOuterAlt(_localctx, 52);
        setState(1409);
        match(SPARQLParser::K_ISNUMERIC);
        setState(1410);
        match(SPARQLParser::T__1);
        setState(1411);
        expression();
        setState(1412);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_REGEX: {
        enterOuterAlt(_localctx, 53);
        setState(1414);
        regexexpression();
        break;
      }

      case SPARQLParser::K_EXISTS: {
        enterOuterAlt(_localctx, 54);
        setState(1415);
        existsFunc();
        break;
      }

      case SPARQLParser::K_NOT: {
        enterOuterAlt(_localctx, 55);
        setState(1416);
        notexistsFunc();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegexexpressionContext ------------------------------------------------------------------

SPARQLParser::RegexexpressionContext::RegexexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::RegexexpressionContext::K_REGEX() {
  return getToken(SPARQLParser::K_REGEX, 0);
}

std::vector<SPARQLParser::ExpressionContext *> SPARQLParser::RegexexpressionContext::expression() {
  return getRuleContexts<SPARQLParser::ExpressionContext>();
}

SPARQLParser::ExpressionContext* SPARQLParser::RegexexpressionContext::expression(size_t i) {
  return getRuleContext<SPARQLParser::ExpressionContext>(i);
}


size_t SPARQLParser::RegexexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleRegexexpression;
}

void SPARQLParser::RegexexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRegexexpression(this);
}

void SPARQLParser::RegexexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRegexexpression(this);
}


antlrcpp::Any SPARQLParser::RegexexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitRegexexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::RegexexpressionContext* SPARQLParser::regexexpression() {
  RegexexpressionContext *_localctx = _tracker.createInstance<RegexexpressionContext>(_ctx, getState());
  enterRule(_localctx, 248, SPARQLParser::RuleRegexexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1419);
    match(SPARQLParser::K_REGEX);
    setState(1420);
    match(SPARQLParser::T__1);
    setState(1421);
    expression();
    setState(1422);
    match(SPARQLParser::T__8);
    setState(1423);
    expression();
    setState(1426);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::T__8) {
      setState(1424);
      match(SPARQLParser::T__8);
      setState(1425);
      expression();
    }
    setState(1428);
    match(SPARQLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubstringexpressionContext ------------------------------------------------------------------

SPARQLParser::SubstringexpressionContext::SubstringexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::SubstringexpressionContext::K_SUBSTR() {
  return getToken(SPARQLParser::K_SUBSTR, 0);
}

std::vector<SPARQLParser::ExpressionContext *> SPARQLParser::SubstringexpressionContext::expression() {
  return getRuleContexts<SPARQLParser::ExpressionContext>();
}

SPARQLParser::ExpressionContext* SPARQLParser::SubstringexpressionContext::expression(size_t i) {
  return getRuleContext<SPARQLParser::ExpressionContext>(i);
}


size_t SPARQLParser::SubstringexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleSubstringexpression;
}

void SPARQLParser::SubstringexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubstringexpression(this);
}

void SPARQLParser::SubstringexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubstringexpression(this);
}


antlrcpp::Any SPARQLParser::SubstringexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitSubstringexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::SubstringexpressionContext* SPARQLParser::substringexpression() {
  SubstringexpressionContext *_localctx = _tracker.createInstance<SubstringexpressionContext>(_ctx, getState());
  enterRule(_localctx, 250, SPARQLParser::RuleSubstringexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1430);
    match(SPARQLParser::K_SUBSTR);
    setState(1431);
    match(SPARQLParser::T__1);
    setState(1432);
    expression();
    setState(1433);
    match(SPARQLParser::T__8);
    setState(1434);
    expression();
    setState(1437);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::T__8) {
      setState(1435);
      match(SPARQLParser::T__8);
      setState(1436);
      expression();
    }
    setState(1439);
    match(SPARQLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StrReplaceexpressionContext ------------------------------------------------------------------

SPARQLParser::StrReplaceexpressionContext::StrReplaceexpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::StrReplaceexpressionContext::K_REPLACE() {
  return getToken(SPARQLParser::K_REPLACE, 0);
}

std::vector<SPARQLParser::ExpressionContext *> SPARQLParser::StrReplaceexpressionContext::expression() {
  return getRuleContexts<SPARQLParser::ExpressionContext>();
}

SPARQLParser::ExpressionContext* SPARQLParser::StrReplaceexpressionContext::expression(size_t i) {
  return getRuleContext<SPARQLParser::ExpressionContext>(i);
}


size_t SPARQLParser::StrReplaceexpressionContext::getRuleIndex() const {
  return SPARQLParser::RuleStrReplaceexpression;
}

void SPARQLParser::StrReplaceexpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStrReplaceexpression(this);
}

void SPARQLParser::StrReplaceexpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStrReplaceexpression(this);
}


antlrcpp::Any SPARQLParser::StrReplaceexpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitStrReplaceexpression(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::StrReplaceexpressionContext* SPARQLParser::strReplaceexpression() {
  StrReplaceexpressionContext *_localctx = _tracker.createInstance<StrReplaceexpressionContext>(_ctx, getState());
  enterRule(_localctx, 252, SPARQLParser::RuleStrReplaceexpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1441);
    match(SPARQLParser::K_REPLACE);
    setState(1442);
    match(SPARQLParser::T__1);
    setState(1443);
    expression();
    setState(1444);
    match(SPARQLParser::T__8);
    setState(1445);
    expression();
    setState(1446);
    match(SPARQLParser::T__8);
    setState(1447);
    expression();
    setState(1450);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::T__8) {
      setState(1448);
      match(SPARQLParser::T__8);
      setState(1449);
      expression();
    }
    setState(1452);
    match(SPARQLParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExistsFuncContext ------------------------------------------------------------------

SPARQLParser::ExistsFuncContext::ExistsFuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::ExistsFuncContext::K_EXISTS() {
  return getToken(SPARQLParser::K_EXISTS, 0);
}

SPARQLParser::GroupGraphPatternContext* SPARQLParser::ExistsFuncContext::groupGraphPattern() {
  return getRuleContext<SPARQLParser::GroupGraphPatternContext>(0);
}


size_t SPARQLParser::ExistsFuncContext::getRuleIndex() const {
  return SPARQLParser::RuleExistsFunc;
}

void SPARQLParser::ExistsFuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExistsFunc(this);
}

void SPARQLParser::ExistsFuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExistsFunc(this);
}


antlrcpp::Any SPARQLParser::ExistsFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitExistsFunc(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::ExistsFuncContext* SPARQLParser::existsFunc() {
  ExistsFuncContext *_localctx = _tracker.createInstance<ExistsFuncContext>(_ctx, getState());
  enterRule(_localctx, 254, SPARQLParser::RuleExistsFunc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1454);
    match(SPARQLParser::K_EXISTS);
    setState(1455);
    groupGraphPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NotexistsFuncContext ------------------------------------------------------------------

SPARQLParser::NotexistsFuncContext::NotexistsFuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::NotexistsFuncContext::K_NOT() {
  return getToken(SPARQLParser::K_NOT, 0);
}

tree::TerminalNode* SPARQLParser::NotexistsFuncContext::K_EXISTS() {
  return getToken(SPARQLParser::K_EXISTS, 0);
}

SPARQLParser::GroupGraphPatternContext* SPARQLParser::NotexistsFuncContext::groupGraphPattern() {
  return getRuleContext<SPARQLParser::GroupGraphPatternContext>(0);
}


size_t SPARQLParser::NotexistsFuncContext::getRuleIndex() const {
  return SPARQLParser::RuleNotexistsFunc;
}

void SPARQLParser::NotexistsFuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotexistsFunc(this);
}

void SPARQLParser::NotexistsFuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotexistsFunc(this);
}


antlrcpp::Any SPARQLParser::NotexistsFuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitNotexistsFunc(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::NotexistsFuncContext* SPARQLParser::notexistsFunc() {
  NotexistsFuncContext *_localctx = _tracker.createInstance<NotexistsFuncContext>(_ctx, getState());
  enterRule(_localctx, 256, SPARQLParser::RuleNotexistsFunc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1457);
    match(SPARQLParser::K_NOT);
    setState(1458);
    match(SPARQLParser::K_EXISTS);
    setState(1459);
    groupGraphPattern();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AggregateContext ------------------------------------------------------------------

SPARQLParser::AggregateContext::AggregateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::AggregateContext::K_COUNT() {
  return getToken(SPARQLParser::K_COUNT, 0);
}

SPARQLParser::ExpressionContext* SPARQLParser::AggregateContext::expression() {
  return getRuleContext<SPARQLParser::ExpressionContext>(0);
}

tree::TerminalNode* SPARQLParser::AggregateContext::K_DISTINCT() {
  return getToken(SPARQLParser::K_DISTINCT, 0);
}

tree::TerminalNode* SPARQLParser::AggregateContext::K_SUM() {
  return getToken(SPARQLParser::K_SUM, 0);
}

tree::TerminalNode* SPARQLParser::AggregateContext::K_MIN() {
  return getToken(SPARQLParser::K_MIN, 0);
}

tree::TerminalNode* SPARQLParser::AggregateContext::K_MAX() {
  return getToken(SPARQLParser::K_MAX, 0);
}

tree::TerminalNode* SPARQLParser::AggregateContext::K_AVG() {
  return getToken(SPARQLParser::K_AVG, 0);
}

tree::TerminalNode* SPARQLParser::AggregateContext::K_SAMPLE() {
  return getToken(SPARQLParser::K_SAMPLE, 0);
}

tree::TerminalNode* SPARQLParser::AggregateContext::KK_GROUP_CONCAT() {
  return getToken(SPARQLParser::KK_GROUP_CONCAT, 0);
}

tree::TerminalNode* SPARQLParser::AggregateContext::K_SEPARATOR() {
  return getToken(SPARQLParser::K_SEPARATOR, 0);
}

SPARQLParser::StringContext* SPARQLParser::AggregateContext::string() {
  return getRuleContext<SPARQLParser::StringContext>(0);
}


size_t SPARQLParser::AggregateContext::getRuleIndex() const {
  return SPARQLParser::RuleAggregate;
}

void SPARQLParser::AggregateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAggregate(this);
}

void SPARQLParser::AggregateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAggregate(this);
}


antlrcpp::Any SPARQLParser::AggregateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitAggregate(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::AggregateContext* SPARQLParser::aggregate() {
  AggregateContext *_localctx = _tracker.createInstance<AggregateContext>(_ctx, getState());
  enterRule(_localctx, 258, SPARQLParser::RuleAggregate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1525);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::K_COUNT: {
        enterOuterAlt(_localctx, 1);
        setState(1461);
        match(SPARQLParser::K_COUNT);
        setState(1462);
        match(SPARQLParser::T__1);
        setState(1464);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_DISTINCT) {
          setState(1463);
          match(SPARQLParser::K_DISTINCT);
        }
        setState(1468);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SPARQLParser::T__0: {
            setState(1466);
            match(SPARQLParser::T__0);
            break;
          }

          case SPARQLParser::T__1:
          case SPARQLParser::T__14:
          case SPARQLParser::T__15:
          case SPARQLParser::T__26:
          case SPARQLParser::T__28:
          case SPARQLParser::T__29:
          case SPARQLParser::K_NOW:
          case SPARQLParser::K_YEAR:
          case SPARQLParser::K_IF:
          case SPARQLParser::K_CONCAT:
          case SPARQLParser::K_MONTH:
          case SPARQLParser::K_FLOOR:
          case SPARQLParser::K_TZ:
          case SPARQLParser::K_CEIL:
          case SPARQLParser::K_HOURS:
          case SPARQLParser::K_DATATYPE:
          case SPARQLParser::K_ISNUMERIC:
          case SPARQLParser::K_STRUUID:
          case SPARQLParser::K_BOUND:
          case SPARQLParser::K_TIMEZONE:
          case SPARQLParser::K_MIN:
          case SPARQLParser::K_ISBLANK:
          case SPARQLParser::K_UUID:
          case SPARQLParser::K_IRI:
          case SPARQLParser::K_BNODE:
          case SPARQLParser::K_AVG:
          case SPARQLParser::K_SAMPLE:
          case SPARQLParser::K_UCASE:
          case SPARQLParser::K_SAMETERM:
          case SPARQLParser::K_STRSTARTS:
          case SPARQLParser::K_STR:
          case SPARQLParser::K_COALESCE:
          case SPARQLParser::K_STRBEFORE:
          case SPARQLParser::K_ABS:
          case SPARQLParser::K_ISLITERAL:
          case SPARQLParser::K_STRAFTER:
          case SPARQLParser::K_STRLEN:
          case SPARQLParser::K_LANG:
          case SPARQLParser::K_MAX:
          case SPARQLParser::K_NOT:
          case SPARQLParser::K_STRENDS:
          case SPARQLParser::K_CONTAINS:
          case SPARQLParser::K_MINUTES:
          case SPARQLParser::K_REPLACE:
          case SPARQLParser::K_REGEX:
          case SPARQLParser::K_DAY:
          case SPARQLParser::K_STRLANG:
          case SPARQLParser::K_ROUND:
          case SPARQLParser::K_SECONDS:
          case SPARQLParser::K_URI:
          case SPARQLParser::K_EXISTS:
          case SPARQLParser::K_SUM:
          case SPARQLParser::K_LANGMATCHES:
          case SPARQLParser::K_ISURI:
          case SPARQLParser::K_ISIRI:
          case SPARQLParser::K_RAND:
          case SPARQLParser::K_STRDT:
          case SPARQLParser::K_COUNT:
          case SPARQLParser::K_LCASE:
          case SPARQLParser::K_SUBSTR:
          case SPARQLParser::KK_ENCODE_FOR_URI:
          case SPARQLParser::KK_MD5:
          case SPARQLParser::KK_SHA1:
          case SPARQLParser::KK_SHA256:
          case SPARQLParser::KK_SHA384:
          case SPARQLParser::KK_SHA512:
          case SPARQLParser::KK_GROUP_CONCAT:
          case SPARQLParser::IRIREF:
          case SPARQLParser::PNAME_NS:
          case SPARQLParser::PNAME_LN:
          case SPARQLParser::VAR1:
          case SPARQLParser::VAR2:
          case SPARQLParser::INTEGER:
          case SPARQLParser::DECIMAL:
          case SPARQLParser::DOUBLE:
          case SPARQLParser::INTEGER_POSITIVE:
          case SPARQLParser::DECIMAL_POSITIVE:
          case SPARQLParser::DOUBLE_POSITIVE:
          case SPARQLParser::INTEGER_NEGATIVE:
          case SPARQLParser::DECIMAL_NEGATIVE:
          case SPARQLParser::DOUBLE_NEGATIVE:
          case SPARQLParser::STRING_LITERAL1:
          case SPARQLParser::STRING_LITERAL2:
          case SPARQLParser::STRING_LITERAL_LONG1:
          case SPARQLParser::STRING_LITERAL_LONG2: {
            setState(1467);
            expression();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(1470);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_SUM: {
        enterOuterAlt(_localctx, 2);
        setState(1471);
        match(SPARQLParser::K_SUM);
        setState(1472);
        match(SPARQLParser::T__1);
        setState(1474);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_DISTINCT) {
          setState(1473);
          match(SPARQLParser::K_DISTINCT);
        }
        setState(1476);
        expression();
        setState(1477);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_MIN: {
        enterOuterAlt(_localctx, 3);
        setState(1479);
        match(SPARQLParser::K_MIN);
        setState(1480);
        match(SPARQLParser::T__1);
        setState(1482);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_DISTINCT) {
          setState(1481);
          match(SPARQLParser::K_DISTINCT);
        }
        setState(1484);
        expression();
        setState(1485);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_MAX: {
        enterOuterAlt(_localctx, 4);
        setState(1487);
        match(SPARQLParser::K_MAX);
        setState(1488);
        match(SPARQLParser::T__1);
        setState(1490);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_DISTINCT) {
          setState(1489);
          match(SPARQLParser::K_DISTINCT);
        }
        setState(1492);
        expression();
        setState(1493);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_AVG: {
        enterOuterAlt(_localctx, 5);
        setState(1495);
        match(SPARQLParser::K_AVG);
        setState(1496);
        match(SPARQLParser::T__1);
        setState(1498);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_DISTINCT) {
          setState(1497);
          match(SPARQLParser::K_DISTINCT);
        }
        setState(1500);
        expression();
        setState(1501);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::K_SAMPLE: {
        enterOuterAlt(_localctx, 6);
        setState(1503);
        match(SPARQLParser::K_SAMPLE);
        setState(1504);
        match(SPARQLParser::T__1);
        setState(1506);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_DISTINCT) {
          setState(1505);
          match(SPARQLParser::K_DISTINCT);
        }
        setState(1508);
        expression();
        setState(1509);
        match(SPARQLParser::T__2);
        break;
      }

      case SPARQLParser::KK_GROUP_CONCAT: {
        enterOuterAlt(_localctx, 7);
        setState(1511);
        match(SPARQLParser::KK_GROUP_CONCAT);
        setState(1512);
        match(SPARQLParser::T__1);
        setState(1514);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::K_DISTINCT) {
          setState(1513);
          match(SPARQLParser::K_DISTINCT);
        }
        setState(1516);
        expression();
        setState(1521);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SPARQLParser::T__5) {
          setState(1517);
          match(SPARQLParser::T__5);
          setState(1518);
          match(SPARQLParser::K_SEPARATOR);
          setState(1519);
          match(SPARQLParser::T__20);
          setState(1520);
          string();
        }
        setState(1523);
        match(SPARQLParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IriOrFunctionContext ------------------------------------------------------------------

SPARQLParser::IriOrFunctionContext::IriOrFunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::IriContext* SPARQLParser::IriOrFunctionContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}

SPARQLParser::ArgListContext* SPARQLParser::IriOrFunctionContext::argList() {
  return getRuleContext<SPARQLParser::ArgListContext>(0);
}


size_t SPARQLParser::IriOrFunctionContext::getRuleIndex() const {
  return SPARQLParser::RuleIriOrFunction;
}

void SPARQLParser::IriOrFunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIriOrFunction(this);
}

void SPARQLParser::IriOrFunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIriOrFunction(this);
}


antlrcpp::Any SPARQLParser::IriOrFunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitIriOrFunction(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::IriOrFunctionContext* SPARQLParser::iriOrFunction() {
  IriOrFunctionContext *_localctx = _tracker.createInstance<IriOrFunctionContext>(_ctx, getState());
  enterRule(_localctx, 260, SPARQLParser::RuleIriOrFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1527);
    iri();
    setState(1529);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SPARQLParser::T__1 || _la == SPARQLParser::NIL) {
      setState(1528);
      argList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RDFLiteralContext ------------------------------------------------------------------

SPARQLParser::RDFLiteralContext::RDFLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::StringContext* SPARQLParser::RDFLiteralContext::string() {
  return getRuleContext<SPARQLParser::StringContext>(0);
}

tree::TerminalNode* SPARQLParser::RDFLiteralContext::LANGTAG() {
  return getToken(SPARQLParser::LANGTAG, 0);
}

SPARQLParser::IriContext* SPARQLParser::RDFLiteralContext::iri() {
  return getRuleContext<SPARQLParser::IriContext>(0);
}


size_t SPARQLParser::RDFLiteralContext::getRuleIndex() const {
  return SPARQLParser::RuleRDFLiteral;
}

void SPARQLParser::RDFLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRDFLiteral(this);
}

void SPARQLParser::RDFLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRDFLiteral(this);
}


antlrcpp::Any SPARQLParser::RDFLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitRDFLiteral(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::RDFLiteralContext* SPARQLParser::rDFLiteral() {
  RDFLiteralContext *_localctx = _tracker.createInstance<RDFLiteralContext>(_ctx, getState());
  enterRule(_localctx, 262, SPARQLParser::RuleRDFLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1531);
    string();
    setState(1535);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::LANGTAG: {
        setState(1532);
        match(SPARQLParser::LANGTAG);
        break;
      }

      case SPARQLParser::T__27: {
        setState(1533);
        match(SPARQLParser::T__27);
        setState(1534);
        iri();
        break;
      }

      case SPARQLParser::T__0:
      case SPARQLParser::T__1:
      case SPARQLParser::T__2:
      case SPARQLParser::T__3:
      case SPARQLParser::T__4:
      case SPARQLParser::T__5:
      case SPARQLParser::T__7:
      case SPARQLParser::T__8:
      case SPARQLParser::T__9:
      case SPARQLParser::T__11:
      case SPARQLParser::T__12:
      case SPARQLParser::T__14:
      case SPARQLParser::T__15:
      case SPARQLParser::T__16:
      case SPARQLParser::T__17:
      case SPARQLParser::T__18:
      case SPARQLParser::T__19:
      case SPARQLParser::T__20:
      case SPARQLParser::T__21:
      case SPARQLParser::T__22:
      case SPARQLParser::T__23:
      case SPARQLParser::T__24:
      case SPARQLParser::T__25:
      case SPARQLParser::T__26:
      case SPARQLParser::T__28:
      case SPARQLParser::T__29:
      case SPARQLParser::K_IN:
      case SPARQLParser::K_UNDEF:
      case SPARQLParser::K_BIND:
      case SPARQLParser::K_AS:
      case SPARQLParser::K_SERVICE:
      case SPARQLParser::K_MINUS:
      case SPARQLParser::K_FILTER:
      case SPARQLParser::K_NOT:
      case SPARQLParser::K_GRAPH:
      case SPARQLParser::K_VALUES:
      case SPARQLParser::K_OPTIONAL:
      case SPARQLParser::IRIREF:
      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN:
      case SPARQLParser::BLANK_NODE_LABEL:
      case SPARQLParser::VAR1:
      case SPARQLParser::VAR2:
      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE:
      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE:
      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE:
      case SPARQLParser::STRING_LITERAL1:
      case SPARQLParser::STRING_LITERAL2:
      case SPARQLParser::STRING_LITERAL_LONG1:
      case SPARQLParser::STRING_LITERAL_LONG2:
      case SPARQLParser::NIL:
      case SPARQLParser::ANON: {
        break;
      }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericLiteralContext ------------------------------------------------------------------

SPARQLParser::NumericLiteralContext::NumericLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::NumericLiteralUnsignedContext* SPARQLParser::NumericLiteralContext::numericLiteralUnsigned() {
  return getRuleContext<SPARQLParser::NumericLiteralUnsignedContext>(0);
}

SPARQLParser::NumericLiteralPositiveContext* SPARQLParser::NumericLiteralContext::numericLiteralPositive() {
  return getRuleContext<SPARQLParser::NumericLiteralPositiveContext>(0);
}

SPARQLParser::NumericLiteralNegativeContext* SPARQLParser::NumericLiteralContext::numericLiteralNegative() {
  return getRuleContext<SPARQLParser::NumericLiteralNegativeContext>(0);
}


size_t SPARQLParser::NumericLiteralContext::getRuleIndex() const {
  return SPARQLParser::RuleNumericLiteral;
}

void SPARQLParser::NumericLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericLiteral(this);
}

void SPARQLParser::NumericLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericLiteral(this);
}


antlrcpp::Any SPARQLParser::NumericLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitNumericLiteral(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::NumericLiteralContext* SPARQLParser::numericLiteral() {
  NumericLiteralContext *_localctx = _tracker.createInstance<NumericLiteralContext>(_ctx, getState());
  enterRule(_localctx, 264, SPARQLParser::RuleNumericLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1540);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::INTEGER:
      case SPARQLParser::DECIMAL:
      case SPARQLParser::DOUBLE: {
        enterOuterAlt(_localctx, 1);
        setState(1537);
        numericLiteralUnsigned();
        break;
      }

      case SPARQLParser::INTEGER_POSITIVE:
      case SPARQLParser::DECIMAL_POSITIVE:
      case SPARQLParser::DOUBLE_POSITIVE: {
        enterOuterAlt(_localctx, 2);
        setState(1538);
        numericLiteralPositive();
        break;
      }

      case SPARQLParser::INTEGER_NEGATIVE:
      case SPARQLParser::DECIMAL_NEGATIVE:
      case SPARQLParser::DOUBLE_NEGATIVE: {
        enterOuterAlt(_localctx, 3);
        setState(1539);
        numericLiteralNegative();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericLiteralUnsignedContext ------------------------------------------------------------------

SPARQLParser::NumericLiteralUnsignedContext::NumericLiteralUnsignedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::Num_integerContext* SPARQLParser::NumericLiteralUnsignedContext::num_integer() {
  return getRuleContext<SPARQLParser::Num_integerContext>(0);
}

SPARQLParser::Num_decimalContext* SPARQLParser::NumericLiteralUnsignedContext::num_decimal() {
  return getRuleContext<SPARQLParser::Num_decimalContext>(0);
}

SPARQLParser::Num_doubleContext* SPARQLParser::NumericLiteralUnsignedContext::num_double() {
  return getRuleContext<SPARQLParser::Num_doubleContext>(0);
}


size_t SPARQLParser::NumericLiteralUnsignedContext::getRuleIndex() const {
  return SPARQLParser::RuleNumericLiteralUnsigned;
}

void SPARQLParser::NumericLiteralUnsignedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericLiteralUnsigned(this);
}

void SPARQLParser::NumericLiteralUnsignedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericLiteralUnsigned(this);
}


antlrcpp::Any SPARQLParser::NumericLiteralUnsignedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitNumericLiteralUnsigned(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::NumericLiteralUnsignedContext* SPARQLParser::numericLiteralUnsigned() {
  NumericLiteralUnsignedContext *_localctx = _tracker.createInstance<NumericLiteralUnsignedContext>(_ctx, getState());
  enterRule(_localctx, 266, SPARQLParser::RuleNumericLiteralUnsigned);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1545);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(1542);
        num_integer();
        break;
      }

      case SPARQLParser::DECIMAL: {
        enterOuterAlt(_localctx, 2);
        setState(1543);
        num_decimal();
        break;
      }

      case SPARQLParser::DOUBLE: {
        enterOuterAlt(_localctx, 3);
        setState(1544);
        num_double();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericLiteralPositiveContext ------------------------------------------------------------------

SPARQLParser::NumericLiteralPositiveContext::NumericLiteralPositiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::Integer_positiveContext* SPARQLParser::NumericLiteralPositiveContext::integer_positive() {
  return getRuleContext<SPARQLParser::Integer_positiveContext>(0);
}

SPARQLParser::Decimal_positiveContext* SPARQLParser::NumericLiteralPositiveContext::decimal_positive() {
  return getRuleContext<SPARQLParser::Decimal_positiveContext>(0);
}

SPARQLParser::Double_positiveContext* SPARQLParser::NumericLiteralPositiveContext::double_positive() {
  return getRuleContext<SPARQLParser::Double_positiveContext>(0);
}


size_t SPARQLParser::NumericLiteralPositiveContext::getRuleIndex() const {
  return SPARQLParser::RuleNumericLiteralPositive;
}

void SPARQLParser::NumericLiteralPositiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericLiteralPositive(this);
}

void SPARQLParser::NumericLiteralPositiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericLiteralPositive(this);
}


antlrcpp::Any SPARQLParser::NumericLiteralPositiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitNumericLiteralPositive(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::NumericLiteralPositiveContext* SPARQLParser::numericLiteralPositive() {
  NumericLiteralPositiveContext *_localctx = _tracker.createInstance<NumericLiteralPositiveContext>(_ctx, getState());
  enterRule(_localctx, 268, SPARQLParser::RuleNumericLiteralPositive);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1550);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::INTEGER_POSITIVE: {
        enterOuterAlt(_localctx, 1);
        setState(1547);
        integer_positive();
        break;
      }

      case SPARQLParser::DECIMAL_POSITIVE: {
        enterOuterAlt(_localctx, 2);
        setState(1548);
        decimal_positive();
        break;
      }

      case SPARQLParser::DOUBLE_POSITIVE: {
        enterOuterAlt(_localctx, 3);
        setState(1549);
        double_positive();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericLiteralNegativeContext ------------------------------------------------------------------

SPARQLParser::NumericLiteralNegativeContext::NumericLiteralNegativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SPARQLParser::Integer_negativeContext* SPARQLParser::NumericLiteralNegativeContext::integer_negative() {
  return getRuleContext<SPARQLParser::Integer_negativeContext>(0);
}

SPARQLParser::Decimal_negativeContext* SPARQLParser::NumericLiteralNegativeContext::decimal_negative() {
  return getRuleContext<SPARQLParser::Decimal_negativeContext>(0);
}

SPARQLParser::Double_negativeContext* SPARQLParser::NumericLiteralNegativeContext::double_negative() {
  return getRuleContext<SPARQLParser::Double_negativeContext>(0);
}


size_t SPARQLParser::NumericLiteralNegativeContext::getRuleIndex() const {
  return SPARQLParser::RuleNumericLiteralNegative;
}

void SPARQLParser::NumericLiteralNegativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericLiteralNegative(this);
}

void SPARQLParser::NumericLiteralNegativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericLiteralNegative(this);
}


antlrcpp::Any SPARQLParser::NumericLiteralNegativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitNumericLiteralNegative(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::NumericLiteralNegativeContext* SPARQLParser::numericLiteralNegative() {
  NumericLiteralNegativeContext *_localctx = _tracker.createInstance<NumericLiteralNegativeContext>(_ctx, getState());
  enterRule(_localctx, 270, SPARQLParser::RuleNumericLiteralNegative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1555);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::INTEGER_NEGATIVE: {
        enterOuterAlt(_localctx, 1);
        setState(1552);
        integer_negative();
        break;
      }

      case SPARQLParser::DECIMAL_NEGATIVE: {
        enterOuterAlt(_localctx, 2);
        setState(1553);
        decimal_negative();
        break;
      }

      case SPARQLParser::DOUBLE_NEGATIVE: {
        enterOuterAlt(_localctx, 3);
        setState(1554);
        double_negative();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Num_integerContext ------------------------------------------------------------------

SPARQLParser::Num_integerContext::Num_integerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::Num_integerContext::INTEGER() {
  return getToken(SPARQLParser::INTEGER, 0);
}


size_t SPARQLParser::Num_integerContext::getRuleIndex() const {
  return SPARQLParser::RuleNum_integer;
}

void SPARQLParser::Num_integerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNum_integer(this);
}

void SPARQLParser::Num_integerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNum_integer(this);
}


antlrcpp::Any SPARQLParser::Num_integerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitNum_integer(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::Num_integerContext* SPARQLParser::num_integer() {
  Num_integerContext *_localctx = _tracker.createInstance<Num_integerContext>(_ctx, getState());
  enterRule(_localctx, 272, SPARQLParser::RuleNum_integer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1557);
    match(SPARQLParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Num_decimalContext ------------------------------------------------------------------

SPARQLParser::Num_decimalContext::Num_decimalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::Num_decimalContext::DECIMAL() {
  return getToken(SPARQLParser::DECIMAL, 0);
}


size_t SPARQLParser::Num_decimalContext::getRuleIndex() const {
  return SPARQLParser::RuleNum_decimal;
}

void SPARQLParser::Num_decimalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNum_decimal(this);
}

void SPARQLParser::Num_decimalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNum_decimal(this);
}


antlrcpp::Any SPARQLParser::Num_decimalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitNum_decimal(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::Num_decimalContext* SPARQLParser::num_decimal() {
  Num_decimalContext *_localctx = _tracker.createInstance<Num_decimalContext>(_ctx, getState());
  enterRule(_localctx, 274, SPARQLParser::RuleNum_decimal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1559);
    match(SPARQLParser::DECIMAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Num_doubleContext ------------------------------------------------------------------

SPARQLParser::Num_doubleContext::Num_doubleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::Num_doubleContext::DOUBLE() {
  return getToken(SPARQLParser::DOUBLE, 0);
}


size_t SPARQLParser::Num_doubleContext::getRuleIndex() const {
  return SPARQLParser::RuleNum_double;
}

void SPARQLParser::Num_doubleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNum_double(this);
}

void SPARQLParser::Num_doubleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNum_double(this);
}


antlrcpp::Any SPARQLParser::Num_doubleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitNum_double(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::Num_doubleContext* SPARQLParser::num_double() {
  Num_doubleContext *_localctx = _tracker.createInstance<Num_doubleContext>(_ctx, getState());
  enterRule(_localctx, 276, SPARQLParser::RuleNum_double);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1561);
    match(SPARQLParser::DOUBLE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integer_positiveContext ------------------------------------------------------------------

SPARQLParser::Integer_positiveContext::Integer_positiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::Integer_positiveContext::INTEGER_POSITIVE() {
  return getToken(SPARQLParser::INTEGER_POSITIVE, 0);
}


size_t SPARQLParser::Integer_positiveContext::getRuleIndex() const {
  return SPARQLParser::RuleInteger_positive;
}

void SPARQLParser::Integer_positiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger_positive(this);
}

void SPARQLParser::Integer_positiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger_positive(this);
}


antlrcpp::Any SPARQLParser::Integer_positiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitInteger_positive(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::Integer_positiveContext* SPARQLParser::integer_positive() {
  Integer_positiveContext *_localctx = _tracker.createInstance<Integer_positiveContext>(_ctx, getState());
  enterRule(_localctx, 278, SPARQLParser::RuleInteger_positive);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1563);
    match(SPARQLParser::INTEGER_POSITIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decimal_positiveContext ------------------------------------------------------------------

SPARQLParser::Decimal_positiveContext::Decimal_positiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::Decimal_positiveContext::DECIMAL_POSITIVE() {
  return getToken(SPARQLParser::DECIMAL_POSITIVE, 0);
}


size_t SPARQLParser::Decimal_positiveContext::getRuleIndex() const {
  return SPARQLParser::RuleDecimal_positive;
}

void SPARQLParser::Decimal_positiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimal_positive(this);
}

void SPARQLParser::Decimal_positiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimal_positive(this);
}


antlrcpp::Any SPARQLParser::Decimal_positiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDecimal_positive(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::Decimal_positiveContext* SPARQLParser::decimal_positive() {
  Decimal_positiveContext *_localctx = _tracker.createInstance<Decimal_positiveContext>(_ctx, getState());
  enterRule(_localctx, 280, SPARQLParser::RuleDecimal_positive);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1565);
    match(SPARQLParser::DECIMAL_POSITIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Double_positiveContext ------------------------------------------------------------------

SPARQLParser::Double_positiveContext::Double_positiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::Double_positiveContext::DOUBLE_POSITIVE() {
  return getToken(SPARQLParser::DOUBLE_POSITIVE, 0);
}


size_t SPARQLParser::Double_positiveContext::getRuleIndex() const {
  return SPARQLParser::RuleDouble_positive;
}

void SPARQLParser::Double_positiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDouble_positive(this);
}

void SPARQLParser::Double_positiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDouble_positive(this);
}


antlrcpp::Any SPARQLParser::Double_positiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDouble_positive(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::Double_positiveContext* SPARQLParser::double_positive() {
  Double_positiveContext *_localctx = _tracker.createInstance<Double_positiveContext>(_ctx, getState());
  enterRule(_localctx, 282, SPARQLParser::RuleDouble_positive);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1567);
    match(SPARQLParser::DOUBLE_POSITIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integer_negativeContext ------------------------------------------------------------------

SPARQLParser::Integer_negativeContext::Integer_negativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::Integer_negativeContext::INTEGER_NEGATIVE() {
  return getToken(SPARQLParser::INTEGER_NEGATIVE, 0);
}


size_t SPARQLParser::Integer_negativeContext::getRuleIndex() const {
  return SPARQLParser::RuleInteger_negative;
}

void SPARQLParser::Integer_negativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteger_negative(this);
}

void SPARQLParser::Integer_negativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteger_negative(this);
}


antlrcpp::Any SPARQLParser::Integer_negativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitInteger_negative(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::Integer_negativeContext* SPARQLParser::integer_negative() {
  Integer_negativeContext *_localctx = _tracker.createInstance<Integer_negativeContext>(_ctx, getState());
  enterRule(_localctx, 284, SPARQLParser::RuleInteger_negative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1569);
    match(SPARQLParser::INTEGER_NEGATIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decimal_negativeContext ------------------------------------------------------------------

SPARQLParser::Decimal_negativeContext::Decimal_negativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::Decimal_negativeContext::DECIMAL_NEGATIVE() {
  return getToken(SPARQLParser::DECIMAL_NEGATIVE, 0);
}


size_t SPARQLParser::Decimal_negativeContext::getRuleIndex() const {
  return SPARQLParser::RuleDecimal_negative;
}

void SPARQLParser::Decimal_negativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimal_negative(this);
}

void SPARQLParser::Decimal_negativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimal_negative(this);
}


antlrcpp::Any SPARQLParser::Decimal_negativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDecimal_negative(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::Decimal_negativeContext* SPARQLParser::decimal_negative() {
  Decimal_negativeContext *_localctx = _tracker.createInstance<Decimal_negativeContext>(_ctx, getState());
  enterRule(_localctx, 286, SPARQLParser::RuleDecimal_negative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1571);
    match(SPARQLParser::DECIMAL_NEGATIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Double_negativeContext ------------------------------------------------------------------

SPARQLParser::Double_negativeContext::Double_negativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::Double_negativeContext::DOUBLE_NEGATIVE() {
  return getToken(SPARQLParser::DOUBLE_NEGATIVE, 0);
}


size_t SPARQLParser::Double_negativeContext::getRuleIndex() const {
  return SPARQLParser::RuleDouble_negative;
}

void SPARQLParser::Double_negativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDouble_negative(this);
}

void SPARQLParser::Double_negativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDouble_negative(this);
}


antlrcpp::Any SPARQLParser::Double_negativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitDouble_negative(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::Double_negativeContext* SPARQLParser::double_negative() {
  Double_negativeContext *_localctx = _tracker.createInstance<Double_negativeContext>(_ctx, getState());
  enterRule(_localctx, 288, SPARQLParser::RuleDouble_negative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1573);
    match(SPARQLParser::DOUBLE_NEGATIVE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

SPARQLParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SPARQLParser::BooleanLiteralContext::getRuleIndex() const {
  return SPARQLParser::RuleBooleanLiteral;
}

void SPARQLParser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteral(this);
}

void SPARQLParser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteral(this);
}


antlrcpp::Any SPARQLParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::BooleanLiteralContext* SPARQLParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 290, SPARQLParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1575);
    _la = _input->LA(1);
    if (!(_la == SPARQLParser::T__28

    || _la == SPARQLParser::T__29)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

SPARQLParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::StringContext::STRING_LITERAL1() {
  return getToken(SPARQLParser::STRING_LITERAL1, 0);
}

tree::TerminalNode* SPARQLParser::StringContext::STRING_LITERAL2() {
  return getToken(SPARQLParser::STRING_LITERAL2, 0);
}

tree::TerminalNode* SPARQLParser::StringContext::STRING_LITERAL_LONG1() {
  return getToken(SPARQLParser::STRING_LITERAL_LONG1, 0);
}

tree::TerminalNode* SPARQLParser::StringContext::STRING_LITERAL_LONG2() {
  return getToken(SPARQLParser::STRING_LITERAL_LONG2, 0);
}


size_t SPARQLParser::StringContext::getRuleIndex() const {
  return SPARQLParser::RuleString;
}

void SPARQLParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void SPARQLParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


antlrcpp::Any SPARQLParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::StringContext* SPARQLParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 292, SPARQLParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1577);
    _la = _input->LA(1);
    if (!(((((_la - 158) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 158)) & ((1ULL << (SPARQLParser::STRING_LITERAL1 - 158))
      | (1ULL << (SPARQLParser::STRING_LITERAL2 - 158))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG1 - 158))
      | (1ULL << (SPARQLParser::STRING_LITERAL_LONG2 - 158)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IriContext ------------------------------------------------------------------

SPARQLParser::IriContext::IriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::IriContext::IRIREF() {
  return getToken(SPARQLParser::IRIREF, 0);
}

SPARQLParser::PrefixedNameContext* SPARQLParser::IriContext::prefixedName() {
  return getRuleContext<SPARQLParser::PrefixedNameContext>(0);
}


size_t SPARQLParser::IriContext::getRuleIndex() const {
  return SPARQLParser::RuleIri;
}

void SPARQLParser::IriContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIri(this);
}

void SPARQLParser::IriContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIri(this);
}


antlrcpp::Any SPARQLParser::IriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitIri(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::IriContext* SPARQLParser::iri() {
  IriContext *_localctx = _tracker.createInstance<IriContext>(_ctx, getState());
  enterRule(_localctx, 294, SPARQLParser::RuleIri);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1581);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SPARQLParser::IRIREF: {
        enterOuterAlt(_localctx, 1);
        setState(1579);
        match(SPARQLParser::IRIREF);
        break;
      }

      case SPARQLParser::PNAME_NS:
      case SPARQLParser::PNAME_LN: {
        enterOuterAlt(_localctx, 2);
        setState(1580);
        prefixedName();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixedNameContext ------------------------------------------------------------------

SPARQLParser::PrefixedNameContext::PrefixedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::PrefixedNameContext::PNAME_LN() {
  return getToken(SPARQLParser::PNAME_LN, 0);
}

tree::TerminalNode* SPARQLParser::PrefixedNameContext::PNAME_NS() {
  return getToken(SPARQLParser::PNAME_NS, 0);
}


size_t SPARQLParser::PrefixedNameContext::getRuleIndex() const {
  return SPARQLParser::RulePrefixedName;
}

void SPARQLParser::PrefixedNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixedName(this);
}

void SPARQLParser::PrefixedNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixedName(this);
}


antlrcpp::Any SPARQLParser::PrefixedNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitPrefixedName(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::PrefixedNameContext* SPARQLParser::prefixedName() {
  PrefixedNameContext *_localctx = _tracker.createInstance<PrefixedNameContext>(_ctx, getState());
  enterRule(_localctx, 296, SPARQLParser::RulePrefixedName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1583);
    _la = _input->LA(1);
    if (!(_la == SPARQLParser::PNAME_NS

    || _la == SPARQLParser::PNAME_LN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlankNodeContext ------------------------------------------------------------------

SPARQLParser::BlankNodeContext::BlankNodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SPARQLParser::BlankNodeContext::BLANK_NODE_LABEL() {
  return getToken(SPARQLParser::BLANK_NODE_LABEL, 0);
}

tree::TerminalNode* SPARQLParser::BlankNodeContext::ANON() {
  return getToken(SPARQLParser::ANON, 0);
}


size_t SPARQLParser::BlankNodeContext::getRuleIndex() const {
  return SPARQLParser::RuleBlankNode;
}

void SPARQLParser::BlankNodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlankNode(this);
}

void SPARQLParser::BlankNodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SPARQLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlankNode(this);
}


antlrcpp::Any SPARQLParser::BlankNodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SPARQLVisitor*>(visitor))
    return parserVisitor->visitBlankNode(this);
  else
    return visitor->visitChildren(this);
}

SPARQLParser::BlankNodeContext* SPARQLParser::blankNode() {
  BlankNodeContext *_localctx = _tracker.createInstance<BlankNodeContext>(_ctx, getState());
  enterRule(_localctx, 298, SPARQLParser::RuleBlankNode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1585);
    _la = _input->LA(1);
    if (!(_la == SPARQLParser::BLANK_NODE_LABEL

    || _la == SPARQLParser::ANON)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SPARQLParser::_decisionToDFA;
atn::PredictionContextCache SPARQLParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SPARQLParser::_atn;
std::vector<uint16_t> SPARQLParser::_serializedATN;

std::vector<std::string> SPARQLParser::_ruleNames = {
  "entry", "queryUnit", "query", "updateUnit", "prologue", "baseDecl", "prefixDecl", 
  "selectquery", "subSelect", "selectClause", "expressionAsVar", "constructquery", 
  "describequery", "askquery", "datasetClause", "defaultGraphClause", "namedGraphClause", 
  "sourceSelector", "whereClause", "solutionModifier", "groupClause", "groupCondition", 
  "havingClause", "havingCondition", "orderClause", "orderCondition", "limitoffsetClauses", 
  "limitClause", "offsetClause", "valuesClause", "update", "update1", "load", 
  "clear", "drop", "create", "add", "move", "copy", "insertData", "deleteData", 
  "deleteWhere", "modify", "deleteClause", "insertClause", "usingClause", 
  "graphOrDefault", "graphRef", "graphRefAll", "quadPattern", "quadData", 
  "quads", "quadsNotTriples", "triplesTemplate", "groupGraphPattern", "groupGraphPatternSub", 
  "graphPatternTriplesBlock", "triplesBlock", "graphPatternNotTriples", 
  "optionalGraphPattern", "graphGraphPattern", "serviceGraphPattern", "bind", 
  "inlineData", "dataBlock", "inlineDataOnevar", "inlineDataFull", "dataBlockValue", 
  "minusGraphPattern", "groupOrUnionGraphPattern", "filter", "constraint", 
  "functionCall", "argList", "expressionList", "constructTemplate", "constructTriples", 
  "triplesSameSubject", "propertyList", "propertyListNotEmpty", "verb", 
  "objectList", "object", "triplesSameSubjectpath", "propertyListpath", 
  "propertyListpathNotEmpty", "verbpathOrSimple", "verbpath", "verbSimple", 
  "objectListpath", "objectpath", "path", "pathAlternative", "pathSequence", 
  "pathElt", "pathEltOrInverse", "pathMod", "pathPrimary", "pathNegatedPropertySet", 
  "pathOneInPropertySet", "triplesNode", "blankNodepropertyList", "triplesNodepath", 
  "blankNodepropertyListpath", "collection", "collectionpath", "graphNode", 
  "graphNodepath", "varOrTerm", "varOrIri", "var", "graphTerm", "expression", 
  "conditionalOrexpression", "conditionalAndexpression", "valueLogical", 
  "relationalexpression", "numericexpression", "additiveexpression", "multiplicativeexpression", 
  "unaryexpression", "primaryexpression", "brackettedexpression", "builtInCall", 
  "regexexpression", "substringexpression", "strReplaceexpression", "existsFunc", 
  "notexistsFunc", "aggregate", "iriOrFunction", "rDFLiteral", "numericLiteral", 
  "numericLiteralUnsigned", "numericLiteralPositive", "numericLiteralNegative", 
  "num_integer", "num_decimal", "num_double", "integer_positive", "decimal_positive", 
  "double_positive", "integer_negative", "decimal_negative", "double_negative", 
  "booleanLiteral", "string", "iri", "prefixedName", "blankNode"
};

std::vector<std::string> SPARQLParser::_literalNames = {
  "", "'*'", "'('", "')'", "'{'", "'}'", "';'", "'DELETE WHERE'", "'.'", 
  "','", "'a'", "'|'", "'/'", "'^'", "'?'", "'+'", "'!'", "'['", "']'", 
  "'||'", "'&&'", "'='", "'!='", "'<'", "'>'", "'<='", "'>='", "'-'", "'^^'", 
  "'true'", "'false'"
};

std::vector<std::string> SPARQLParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "K_NOW", "K_YEAR", 
  "K_UNION", "K_IF", "K_ASK", "K_ASC", "K_CONCAT", "K_IN", "K_UNDEF", "K_INSERT", 
  "K_MONTH", "K_DEFAULT", "K_SELECT", "K_FLOOR", "K_TZ", "K_COPY", "K_CEIL", 
  "K_HOURS", "K_DATATYPE", "K_ISNUMERIC", "K_STRUUID", "K_CONSTRUCT", "K_ADD", 
  "K_BOUND", "K_NAMED", "K_TIMEZONE", "K_MIN", "K_ISBLANK", "K_UUID", "K_BIND", 
  "K_CLEAR", "K_INTO", "K_AS", "K_ALL", "K_IRI", "K_BASE", "K_BY", "K_DROP", 
  "K_LOAD", "K_WITH", "K_BNODE", "K_WHERE", "K_AVG", "K_SAMPLE", "K_UCASE", 
  "K_SERVICE", "K_MINUS", "K_SAMETERM", "K_STRSTARTS", "K_STR", "K_MOVE", 
  "K_HAVING", "K_COALESCE", "K_STRBEFORE", "K_ABS", "K_ISLITERAL", "K_STRAFTER", 
  "K_STRLEN", "K_LANG", "K_CREATE", "K_DESC", "K_MAX", "K_FILTER", "K_USING", 
  "K_NOT", "K_STRENDS", "K_OFFSET", "K_CONTAINS", "K_PREFIX", "K_MINUTES", 
  "K_REPLACE", "K_REGEX", "K_DELETE", "K_SEPARATOR", "K_DAY", "K_SILENT", 
  "K_STRLANG", "K_ORDER", "K_ROUND", "K_GRAPH", "K_SECONDS", "K_URI", "K_DISTINCT", 
  "K_EXISTS", "K_GROUP", "K_SUM", "K_REDUCED", "K_FROM", "K_LANGMATCHES", 
  "K_ISURI", "K_TO", "K_ISIRI", "K_RAND", "K_STRDT", "K_COUNT", "K_DESCRIBE", 
  "K_VALUES", "K_LCASE", "K_OPTIONAL", "K_LIMIT", "K_SUBSTR", "KK_INSERTDATA", 
  "KK_DELETEDATA", "KK_ENCODE_FOR_URI", "KK_MD5", "KK_SHA1", "KK_SHA256", 
  "KK_SHA384", "KK_SHA512", "KK_GROUP_CONCAT", "IRIREF", "PNAME_NS", "PNAME_LN", 
  "BLANK_NODE_LABEL", "VAR1", "VAR2", "LANGTAG", "INTEGER", "DECIMAL", "DOUBLE", 
  "INTEGER_POSITIVE", "DECIMAL_POSITIVE", "DOUBLE_POSITIVE", "INTEGER_NEGATIVE", 
  "DECIMAL_NEGATIVE", "DOUBLE_NEGATIVE", "EXPONENT", "STRING_LITERAL1", 
  "STRING_LITERAL2", "STRING_LITERAL_LONG1", "STRING_LITERAL_LONG2", "ECHAR", 
  "NIL", "WS", "ANON", "PN_CHARS_BASE", "PN_CHARS_U", "VARNAME", "PN_CHARS", 
  "PN_PREFIX", "PN_LOCAL", "PLX", "PERCENT", "HEX", "PN_LOCAL_ESC"
};

dfa::Vocabulary SPARQLParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SPARQLParser::_tokenNames;

SPARQLParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0xb1, 0x636, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x133, 
    0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x13c, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x144, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 
    0x147, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x152, 0xa, 0x9, 0xc, 0x9, 
    0xe, 0x9, 0x155, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x161, 
    0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0x165, 0xa, 0xb, 0xd, 0xb, 0xe, 
    0xb, 0x166, 0x3, 0xb, 0x5, 0xb, 0x16a, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x7, 0xd, 0x175, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x178, 0xb, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x17e, 0xa, 0xd, 0xc, 0xd, 
    0xe, 0xd, 0x181, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x186, 
    0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x18a, 0xa, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x6, 0xe, 0x18e, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x18f, 0x3, 0xe, 
    0x5, 0xe, 0x193, 0xa, 0xe, 0x3, 0xe, 0x7, 0xe, 0x196, 0xa, 0xe, 0xc, 
    0xe, 0xe, 0xe, 0x199, 0xb, 0xe, 0x3, 0xe, 0x5, 0xe, 0x19c, 0xa, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x1a2, 0xa, 0xf, 0xc, 
    0xf, 0xe, 0xf, 0x1a5, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x1ad, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x5, 
    0x14, 0x1b7, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x5, 0x15, 
    0x1bc, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1bf, 0xa, 0x15, 0x3, 0x15, 
    0x5, 0x15, 0x1c2, 0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1c5, 0xa, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0x1ca, 0xa, 0x16, 0xd, 0x16, 
    0xe, 0x16, 0x1cb, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x1d4, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x1d9, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x6, 0x18, 0x1dd, 
    0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 0x1de, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x6, 0x1a, 0x1e6, 0xa, 0x1a, 0xd, 0x1a, 0xe, 0x1a, 
    0x1e7, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x1ee, 
    0xa, 0x1b, 0x5, 0x1b, 0x1f0, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
    0x1f4, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x1f8, 0xa, 0x1c, 
    0x5, 0x1c, 0x1fa, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x204, 0xa, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x5, 0x20, 0x20a, 0xa, 0x20, 
    0x5, 0x20, 0x20c, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x5, 0x21, 0x219, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 
    0x21d, 0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x222, 
    0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x226, 0xa, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x5, 0x24, 0x22c, 0xa, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x232, 0xa, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x5, 0x26, 0x238, 0xa, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x240, 
    0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 
    0x28, 0x5, 0x28, 0x248, 0xa, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 
    0x259, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x25d, 0xa, 0x2c, 
    0x3, 0x2c, 0x5, 0x2c, 0x260, 0xa, 0x2c, 0x3, 0x2c, 0x7, 0x2c, 0x263, 
    0xa, 0x2c, 0xc, 0x2c, 0xe, 0x2c, 0x266, 0xb, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x275, 
    0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x279, 0xa, 0x30, 0x3, 0x30, 
    0x5, 0x30, 0x27c, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x285, 0xa, 0x32, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
    0x34, 0x3, 0x35, 0x5, 0x35, 0x290, 0xa, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x5, 0x35, 0x294, 0xa, 0x35, 0x3, 0x35, 0x5, 0x35, 0x297, 0xa, 0x35, 
    0x7, 0x35, 0x299, 0xa, 0x35, 0xc, 0x35, 0xe, 0x35, 0x29c, 0xb, 0x35, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x2a2, 0xa, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x2a9, 
    0xa, 0x37, 0x5, 0x37, 0x2ab, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x5, 0x38, 0x2b0, 0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x5, 0x39, 
    0x2b5, 0xa, 0x39, 0x3, 0x39, 0x7, 0x39, 0x2b8, 0xa, 0x39, 0xc, 0x39, 
    0xe, 0x39, 0x2bb, 0xb, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2bf, 
    0xa, 0x3a, 0x3, 0x3a, 0x5, 0x3a, 0x2c2, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x5, 0x3b, 0x2c7, 0xa, 0x3b, 0x5, 0x3b, 0x2c9, 0xa, 0x3b, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x2d3, 0xa, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 
    0x3f, 0x5, 0x3f, 0x2de, 0xa, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
    0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 
    0x2ef, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x2f4, 
    0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 0x2f7, 0xb, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x7, 0x44, 0x2fe, 0xa, 0x44, 0xc, 0x44, 
    0xe, 0x44, 0x301, 0xb, 0x44, 0x3, 0x44, 0x5, 0x44, 0x304, 0xa, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x7, 0x44, 0x309, 0xa, 0x44, 0xc, 0x44, 
    0xe, 0x44, 0x30c, 0xb, 0x44, 0x3, 0x44, 0x3, 0x44, 0x7, 0x44, 0x310, 
    0xa, 0x44, 0xc, 0x44, 0xe, 0x44, 0x313, 0xb, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x31c, 
    0xa, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x47, 0x7, 0x47, 0x324, 0xa, 0x47, 0xc, 0x47, 0xe, 0x47, 0x327, 0xb, 
    0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
    0x5, 0x49, 0x32f, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 
    0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x337, 0xa, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 
    0x3, 0x4b, 0x7, 0x4b, 0x33c, 0xa, 0x4b, 0xc, 0x4b, 0xe, 0x4b, 0x33f, 
    0xb, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x343, 0xa, 0x4b, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x7, 0x4c, 0x34a, 0xa, 0x4c, 
    0xc, 0x4c, 0xe, 0x4c, 0x34d, 0xb, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 
    0x351, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x355, 0xa, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 0x4e, 0x35c, 
    0xa, 0x4e, 0x5, 0x4e, 0x35e, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x366, 0xa, 0x4f, 0x3, 0x50, 
    0x5, 0x50, 0x369, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x5, 0x51, 0x371, 0xa, 0x51, 0x7, 0x51, 0x373, 
    0xa, 0x51, 0xc, 0x51, 0xe, 0x51, 0x376, 0xb, 0x51, 0x3, 0x52, 0x3, 0x52, 
    0x5, 0x52, 0x37a, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x7, 0x53, 
    0x37f, 0xa, 0x53, 0xc, 0x53, 0xe, 0x53, 0x382, 0xb, 0x53, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 
    0x55, 0x5, 0x55, 0x38c, 0xa, 0x55, 0x3, 0x56, 0x5, 0x56, 0x38f, 0xa, 
    0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
    0x5, 0x57, 0x397, 0xa, 0x57, 0x7, 0x57, 0x399, 0xa, 0x57, 0xc, 0x57, 
    0xe, 0x57, 0x39c, 0xb, 0x57, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x3a0, 
    0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 
    0x5b, 0x3, 0x5b, 0x7, 0x5b, 0x3a9, 0xa, 0x5b, 0xc, 0x5b, 0xe, 0x5b, 
    0x3ac, 0xb, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 
    0x3, 0x5e, 0x3, 0x5e, 0x7, 0x5e, 0x3b5, 0xa, 0x5e, 0xc, 0x5e, 0xe, 0x5e, 
    0x3b8, 0xb, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x7, 0x5f, 0x3bd, 
    0xa, 0x5f, 0xc, 0x5f, 0xe, 0x5f, 0x3c0, 0xb, 0x5f, 0x3, 0x60, 0x3, 0x60, 
    0x5, 0x60, 0x3c4, 0xa, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 
    0x3c9, 0xa, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 0x3d5, 
    0xa, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x7, 
    0x64, 0x3dc, 0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 0x3df, 0xb, 0x64, 0x5, 
    0x64, 0x3e1, 0xa, 0x64, 0x3, 0x64, 0x5, 0x64, 0x3e4, 0xa, 0x64, 0x3, 
    0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x3eb, 
    0xa, 0x65, 0x5, 0x65, 0x3ed, 0xa, 0x65, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 
    0x3f1, 0xa, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x68, 
    0x3, 0x68, 0x5, 0x68, 0x3f9, 0xa, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 
    0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x6, 0x6a, 0x401, 0xa, 0x6a, 0xd, 0x6a, 
    0xe, 0x6a, 0x402, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x6, 0x6b, 
    0x409, 0xa, 0x6b, 0xd, 0x6b, 0xe, 0x6b, 0x40a, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x411, 0xa, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 
    0x5, 0x6d, 0x415, 0xa, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 0x419, 
    0xa, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x5, 0x6f, 0x41d, 0xa, 0x6f, 0x3, 0x70, 
    0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 
    0x71, 0x5, 0x71, 0x427, 0xa, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x73, 
    0x3, 0x73, 0x3, 0x73, 0x7, 0x73, 0x42e, 0xa, 0x73, 0xc, 0x73, 0xe, 0x73, 
    0x431, 0xb, 0x73, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x7, 0x74, 0x436, 
    0xa, 0x74, 0xc, 0x74, 0xe, 0x74, 0x439, 0xb, 0x74, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 
    0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 
    0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x5, 0x76, 0x44f, 
    0xa, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 
    0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x5, 0x78, 0x45a, 0xa, 0x78, 
    0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x7, 0x78, 0x460, 0xa, 0x78, 
    0xc, 0x78, 0xe, 0x78, 0x463, 0xb, 0x78, 0x7, 0x78, 0x465, 0xa, 0x78, 
    0xc, 0x78, 0xe, 0x78, 0x468, 0xb, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 
    0x3, 0x79, 0x3, 0x79, 0x7, 0x79, 0x46f, 0xa, 0x79, 0xc, 0x79, 0xe, 0x79, 
    0x472, 0xb, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 
    0x3, 0x7a, 0x3, 0x7a, 0x5, 0x7a, 0x47b, 0xa, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 
    0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x5, 0x7b, 0x484, 
    0xa, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x4b6, 0xa, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x58c, 0xa, 0x7d, 
    0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 
    0x7e, 0x5, 0x7e, 0x595, 0xa, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 
    0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x5, 
    0x7f, 0x5a0, 0xa, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x80, 0x3, 0x80, 
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 
    0x80, 0x5, 0x80, 0x5ad, 0xa, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x81, 
    0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 
    0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x5bb, 0xa, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x5, 0x83, 0x5bf, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x5, 0x83, 0x5c5, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x5cd, 0xa, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x5d5, 
    0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 
    0x83, 0x5, 0x83, 0x5dd, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x5e5, 0xa, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x5ed, 
    0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 
    0x83, 0x5f4, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x5, 0x83, 0x5f8, 0xa, 
    0x83, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x5fc, 0xa, 0x84, 0x3, 0x85, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x5, 0x85, 0x602, 0xa, 0x85, 0x3, 0x86, 
    0x3, 0x86, 0x3, 0x86, 0x5, 0x86, 0x607, 0xa, 0x86, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x5, 0x87, 0x60c, 0xa, 0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 
    0x5, 0x88, 0x611, 0xa, 0x88, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x5, 0x89, 
    0x616, 0xa, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8c, 
    0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 
    0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 
    0x3, 0x93, 0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x95, 0x3, 0x95, 0x5, 
    0x95, 0x630, 0xa, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 
    0x3, 0x97, 0x2, 0x2, 0x98, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
    0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 
    0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 
    0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 
    0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 
    0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 
    0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 
    0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 
    0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 
    0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 
    0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 
    0x12a, 0x12c, 0x2, 0xa, 0x4, 0x2, 0x73, 0x73, 0x77, 0x77, 0x4, 0x2, 
    0x26, 0x26, 0x5d, 0x5d, 0x4, 0x2, 0x3, 0x3, 0x10, 0x11, 0x3, 0x2, 0x93, 
    0x94, 0x3, 0x2, 0x1f, 0x20, 0x3, 0x2, 0xa0, 0xa3, 0x3, 0x2, 0x90, 0x91, 
    0x4, 0x2, 0x92, 0x92, 0xa7, 0xa7, 0x2, 0x6a6, 0x2, 0x132, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x134, 0x3, 0x2, 0x2, 0x2, 0x6, 0x136, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x13f, 0x3, 0x2, 0x2, 0x2, 0xa, 0x145, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x148, 0x3, 0x2, 0x2, 0x2, 0xe, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x14f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x159, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15e, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x18, 0x171, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x19f, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1ae, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x1c6, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1da, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x32, 0x1e2, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x36, 0x1f9, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x1fe, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x203, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x205, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x218, 0x3, 0x2, 0x2, 0x2, 0x42, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x223, 0x3, 0x2, 0x2, 0x2, 0x46, 0x229, 0x3, 0x2, 0x2, 0x2, 0x48, 0x22f, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x235, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x23d, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x245, 0x3, 0x2, 0x2, 0x2, 0x50, 0x24d, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x250, 0x3, 0x2, 0x2, 0x2, 0x54, 0x253, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x258, 0x3, 0x2, 0x2, 0x2, 0x58, 0x26a, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x270, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x27b, 0x3, 0x2, 0x2, 0x2, 0x60, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x62, 0x284, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x286, 0x3, 0x2, 0x2, 0x2, 0x66, 0x28a, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x29d, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2ac, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x2b4, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2bc, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x2d4, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x2db, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x80, 0x2e9, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x84, 0x2f0, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x303, 0x3, 0x2, 0x2, 0x2, 0x88, 0x31b, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x320, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x328, 0x3, 0x2, 0x2, 0x2, 0x90, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x330, 0x3, 0x2, 0x2, 0x2, 0x94, 0x342, 0x3, 0x2, 0x2, 0x2, 0x96, 0x350, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x352, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x358, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x365, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x368, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0x36a, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x379, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0x37b, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x383, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0x38b, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x38e, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0x390, 0x3, 0x2, 0x2, 0x2, 0xae, 0x39f, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x3a1, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0x3a3, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x3a5, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0x3ad, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x3af, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x3b9, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x3c8, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x3d4, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0x3e3, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x3ec, 0x3, 0x2, 0x2, 0x2, 0xca, 0x3f0, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0xce, 0x3f8, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x3fe, 0x3, 0x2, 
    0x2, 0x2, 0xd4, 0x406, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x410, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0x414, 0x3, 0x2, 0x2, 0x2, 0xda, 0x418, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0x41c, 0x3, 0x2, 0x2, 0x2, 0xde, 0x41e, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0x426, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x428, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x42a, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0x432, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x43a, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0x43c, 0x3, 0x2, 0x2, 0x2, 0xec, 0x450, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0x452, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x469, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0x47a, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x483, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0x485, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x58b, 0x3, 0x2, 0x2, 0x2, 0xfa, 
    0x58d, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x598, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x5a3, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0x5b0, 0x3, 0x2, 0x2, 0x2, 0x102, 0x5b3, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x5f7, 0x3, 0x2, 0x2, 0x2, 0x106, 0x5f9, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x5fd, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x606, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x610, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x615, 0x3, 0x2, 0x2, 0x2, 0x112, 0x617, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x619, 0x3, 0x2, 0x2, 0x2, 0x116, 0x61b, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x61d, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x61f, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x621, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x623, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x625, 0x3, 0x2, 0x2, 0x2, 0x122, 0x627, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x629, 0x3, 0x2, 0x2, 0x2, 0x126, 0x62b, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x62f, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x631, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x633, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x133, 
    0x5, 0x4, 0x3, 0x2, 0x12f, 0x130, 0x5, 0x8, 0x5, 0x2, 0x130, 0x131, 
    0x7, 0x2, 0x2, 0x3, 0x131, 0x133, 0x3, 0x2, 0x2, 0x2, 0x132, 0x12e, 
    0x3, 0x2, 0x2, 0x2, 0x132, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x133, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x134, 0x135, 0x5, 0x6, 0x4, 0x2, 0x135, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x136, 0x13b, 0x5, 0xa, 0x6, 0x2, 0x137, 0x13c, 0x5, 0x10, 
    0x9, 0x2, 0x138, 0x13c, 0x5, 0x18, 0xd, 0x2, 0x139, 0x13c, 0x5, 0x1a, 
    0xe, 0x2, 0x13a, 0x13c, 0x5, 0x1c, 0xf, 0x2, 0x13b, 0x137, 0x3, 0x2, 
    0x2, 0x2, 0x13b, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x13b, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x13d, 0x13e, 0x5, 0x3c, 0x1f, 0x2, 0x13e, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x140, 0x5, 0x3e, 0x20, 0x2, 0x140, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x144, 0x5, 0xc, 0x7, 0x2, 0x142, 0x144, 0x5, 0xe, 
    0x8, 0x2, 0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 0x142, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x147, 0x3, 0x2, 0x2, 0x2, 0x145, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x7, 0x44, 0x2, 
    0x2, 0x149, 0x14a, 0x7, 0x8f, 0x2, 0x2, 0x14a, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x14b, 0x14c, 0x7, 0x65, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0x90, 0x2, 0x2, 
    0x14d, 0x14e, 0x7, 0x8f, 0x2, 0x2, 0x14e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x14f, 
    0x153, 0x5, 0x14, 0xb, 0x2, 0x150, 0x152, 0x5, 0x1e, 0x10, 0x2, 0x151, 
    0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x155, 0x3, 0x2, 0x2, 0x2, 0x153, 
    0x151, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 
    0x156, 0x3, 0x2, 0x2, 0x2, 0x155, 0x153, 0x3, 0x2, 0x2, 0x2, 0x156, 
    0x157, 0x5, 0x26, 0x14, 0x2, 0x157, 0x158, 0x5, 0x28, 0x15, 0x2, 0x158, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x5, 0x14, 0xb, 0x2, 0x15a, 
    0x15b, 0x5, 0x26, 0x14, 0x2, 0x15b, 0x15c, 0x5, 0x28, 0x15, 0x2, 0x15c, 
    0x15d, 0x5, 0x3c, 0x1f, 0x2, 0x15d, 0x13, 0x3, 0x2, 0x2, 0x2, 0x15e, 
    0x160, 0x7, 0x2d, 0x2, 0x2, 0x15f, 0x161, 0x9, 0x2, 0x2, 0x2, 0x160, 
    0x15f, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 0x161, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x162, 0x165, 0x5, 0xde, 0x70, 0x2, 0x163, 
    0x165, 0x5, 0x16, 0xc, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 0x164, 
    0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 0x3, 0x2, 0x2, 0x2, 0x166, 
    0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 
    0x16a, 0x3, 0x2, 0x2, 0x2, 0x168, 0x16a, 0x7, 0x3, 0x2, 0x2, 0x169, 
    0x164, 0x3, 0x2, 0x2, 0x2, 0x169, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x7, 0x4, 0x2, 0x2, 0x16c, 0x16d, 
    0x5, 0xe2, 0x72, 0x2, 0x16d, 0x16e, 0x7, 0x41, 0x2, 0x2, 0x16e, 0x16f, 
    0x5, 0xde, 0x70, 0x2, 0x16f, 0x170, 0x7, 0x5, 0x2, 0x2, 0x170, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x171, 0x189, 0x7, 0x36, 0x2, 0x2, 0x172, 0x176, 
    0x5, 0x98, 0x4d, 0x2, 0x173, 0x175, 0x5, 0x1e, 0x10, 0x2, 0x174, 0x173, 
    0x3, 0x2, 0x2, 0x2, 0x175, 0x178, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 
    0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x179, 
    0x3, 0x2, 0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 
    0x5, 0x26, 0x14, 0x2, 0x17a, 0x17b, 0x5, 0x28, 0x15, 0x2, 0x17b, 0x18a, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x17e, 0x5, 0x1e, 0x10, 0x2, 0x17d, 0x17c, 
    0x3, 0x2, 0x2, 0x2, 0x17e, 0x181, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x17d, 
    0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 0x180, 0x182, 
    0x3, 0x2, 0x2, 0x2, 0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 
    0x7, 0x4a, 0x2, 0x2, 0x183, 0x185, 0x7, 0x6, 0x2, 0x2, 0x184, 0x186, 
    0x5, 0x6c, 0x37, 0x2, 0x185, 0x184, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 
    0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 0x187, 0x188, 
    0x7, 0x7, 0x2, 0x2, 0x188, 0x18a, 0x5, 0x28, 0x15, 0x2, 0x189, 0x172, 
    0x3, 0x2, 0x2, 0x2, 0x189, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x18b, 0x192, 0x7, 0x80, 0x2, 0x2, 0x18c, 0x18e, 0x5, 
    0xdc, 0x6f, 0x2, 0x18d, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x3, 
    0x2, 0x2, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x3, 
    0x2, 0x2, 0x2, 0x190, 0x193, 0x3, 0x2, 0x2, 0x2, 0x191, 0x193, 0x7, 
    0x3, 0x2, 0x2, 0x192, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x192, 0x191, 0x3, 
    0x2, 0x2, 0x2, 0x193, 0x197, 0x3, 0x2, 0x2, 0x2, 0x194, 0x196, 0x5, 
    0x1e, 0x10, 0x2, 0x195, 0x194, 0x3, 0x2, 0x2, 0x2, 0x196, 0x199, 0x3, 
    0x2, 0x2, 0x2, 0x197, 0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0x3, 
    0x2, 0x2, 0x2, 0x198, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 
    0x2, 0x2, 0x2, 0x19a, 0x19c, 0x5, 0x26, 0x14, 0x2, 0x19b, 0x19a, 0x3, 
    0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19d, 0x3, 
    0x2, 0x2, 0x2, 0x19d, 0x19e, 0x5, 0x28, 0x15, 0x2, 0x19e, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x19f, 0x1a3, 0x7, 0x25, 0x2, 0x2, 0x1a0, 0x1a2, 0x5, 
    0x1e, 0x10, 0x2, 0x1a1, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a5, 0x3, 
    0x2, 0x2, 0x2, 0x1a3, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x3, 
    0x2, 0x2, 0x2, 0x1a4, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a3, 0x3, 
    0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0x26, 0x14, 0x2, 0x1a7, 0x1a8, 0x5, 
    0x28, 0x15, 0x2, 0x1a8, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1ac, 0x7, 
    0x78, 0x2, 0x2, 0x1aa, 0x1ad, 0x5, 0x20, 0x11, 0x2, 0x1ab, 0x1ad, 0x5, 
    0x22, 0x12, 0x2, 0x1ac, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ab, 0x3, 
    0x2, 0x2, 0x2, 0x1ad, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x5, 0x24, 
    0x13, 0x2, 0x1af, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 0x7, 0x39, 
    0x2, 0x2, 0x1b1, 0x1b2, 0x5, 0x24, 0x13, 0x2, 0x1b2, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x1b3, 0x1b4, 0x5, 0x128, 0x95, 0x2, 0x1b4, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x1b5, 0x1b7, 0x7, 0x4a, 0x2, 0x2, 0x1b6, 0x1b5, 0x3, 0x2, 
    0x2, 0x2, 0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b8, 0x3, 0x2, 
    0x2, 0x2, 0x1b8, 0x1b9, 0x5, 0x6e, 0x38, 0x2, 0x1b9, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x1ba, 0x1bc, 0x5, 0x2a, 0x16, 0x2, 0x1bb, 0x1ba, 0x3, 0x2, 
    0x2, 0x2, 0x1bb, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1be, 0x3, 0x2, 
    0x2, 0x2, 0x1bd, 0x1bf, 0x5, 0x2e, 0x18, 0x2, 0x1be, 0x1bd, 0x3, 0x2, 
    0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c1, 0x3, 0x2, 
    0x2, 0x2, 0x1c0, 0x1c2, 0x5, 0x32, 0x1a, 0x2, 0x1c1, 0x1c0, 0x3, 0x2, 
    0x2, 0x2, 0x1c1, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c4, 0x3, 0x2, 
    0x2, 0x2, 0x1c3, 0x1c5, 0x5, 0x36, 0x1c, 0x2, 0x1c4, 0x1c3, 0x3, 0x2, 
    0x2, 0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x1c6, 0x1c7, 0x7, 0x75, 0x2, 0x2, 0x1c7, 0x1c9, 0x7, 0x45, 0x2, 
    0x2, 0x1c8, 0x1ca, 0x5, 0x2c, 0x17, 0x2, 0x1c9, 0x1c8, 0x3, 0x2, 0x2, 
    0x2, 0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 0x2, 
    0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x1cd, 0x1d9, 0x5, 0xf8, 0x7d, 0x2, 0x1ce, 0x1d9, 0x5, 0x92, 0x4a, 0x2, 
    0x1cf, 0x1d0, 0x7, 0x4, 0x2, 0x2, 0x1d0, 0x1d3, 0x5, 0xe2, 0x72, 0x2, 
    0x1d1, 0x1d2, 0x7, 0x41, 0x2, 0x2, 0x1d2, 0x1d4, 0x5, 0xde, 0x70, 0x2, 
    0x1d3, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 
    0x1d4, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x7, 0x5, 0x2, 0x2, 
    0x1d6, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d9, 0x5, 0xde, 0x70, 0x2, 
    0x1d8, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x1d8, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d7, 0x3, 0x2, 0x2, 0x2, 
    0x1d9, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1dc, 0x7, 0x54, 0x2, 0x2, 
    0x1db, 0x1dd, 0x5, 0x30, 0x19, 0x2, 0x1dc, 0x1db, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 
    0x1de, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1e0, 
    0x1e1, 0x5, 0x90, 0x49, 0x2, 0x1e1, 0x31, 0x3, 0x2, 0x2, 0x2, 0x1e2, 
    0x1e3, 0x7, 0x6e, 0x2, 0x2, 0x1e3, 0x1e5, 0x7, 0x45, 0x2, 0x2, 0x1e4, 
    0x1e6, 0x5, 0x34, 0x1b, 0x2, 0x1e5, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e7, 
    0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x33, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 
    0x9, 0x3, 0x2, 0x2, 0x1ea, 0x1f0, 0x5, 0xf6, 0x7c, 0x2, 0x1eb, 0x1ee, 
    0x5, 0x90, 0x49, 0x2, 0x1ec, 0x1ee, 0x5, 0xde, 0x70, 0x2, 0x1ed, 0x1eb, 
    0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1f0, 
    0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1ed, 
    0x3, 0x2, 0x2, 0x2, 0x1f0, 0x35, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f3, 0x5, 
    0x38, 0x1d, 0x2, 0x1f2, 0x1f4, 0x5, 0x3a, 0x1e, 0x2, 0x1f3, 0x1f2, 0x3, 
    0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1fa, 0x3, 
    0x2, 0x2, 0x2, 0x1f5, 0x1f7, 0x5, 0x3a, 0x1e, 0x2, 0x1f6, 0x1f8, 0x5, 
    0x38, 0x1d, 0x2, 0x1f7, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 
    0x2, 0x2, 0x2, 0x1f8, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x1f1, 0x3, 
    0x2, 0x2, 0x2, 0x1f9, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x84, 0x2, 0x2, 0x1fc, 0x1fd, 0x7, 0x96, 
    0x2, 0x2, 0x1fd, 0x39, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x7, 0x63, 
    0x2, 0x2, 0x1ff, 0x200, 0x7, 0x96, 0x2, 0x2, 0x200, 0x3b, 0x3, 0x2, 
    0x2, 0x2, 0x201, 0x202, 0x7, 0x81, 0x2, 0x2, 0x202, 0x204, 0x5, 0x82, 
    0x42, 0x2, 0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 
    0x2, 0x2, 0x204, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x205, 0x20b, 0x5, 0xa, 0x6, 
    0x2, 0x206, 0x209, 0x5, 0x40, 0x21, 0x2, 0x207, 0x208, 0x7, 0x8, 0x2, 
    0x2, 0x208, 0x20a, 0x5, 0x3e, 0x20, 0x2, 0x209, 0x207, 0x3, 0x2, 0x2, 
    0x2, 0x209, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20c, 0x3, 0x2, 0x2, 
    0x2, 0x20b, 0x206, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 0x2, 0x2, 
    0x2, 0x20c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x219, 0x5, 0x42, 0x22, 
    0x2, 0x20e, 0x219, 0x5, 0x44, 0x23, 0x2, 0x20f, 0x219, 0x5, 0x46, 0x24, 
    0x2, 0x210, 0x219, 0x5, 0x4a, 0x26, 0x2, 0x211, 0x219, 0x5, 0x4c, 0x27, 
    0x2, 0x212, 0x219, 0x5, 0x4e, 0x28, 0x2, 0x213, 0x219, 0x5, 0x48, 0x25, 
    0x2, 0x214, 0x219, 0x5, 0x50, 0x29, 0x2, 0x215, 0x219, 0x5, 0x52, 0x2a, 
    0x2, 0x216, 0x219, 0x5, 0x54, 0x2b, 0x2, 0x217, 0x219, 0x5, 0x56, 0x2c, 
    0x2, 0x218, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x218, 0x20e, 0x3, 0x2, 0x2, 
    0x2, 0x218, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x218, 0x210, 0x3, 0x2, 0x2, 
    0x2, 0x218, 0x211, 0x3, 0x2, 0x2, 0x2, 0x218, 0x212, 0x3, 0x2, 0x2, 
    0x2, 0x218, 0x213, 0x3, 0x2, 0x2, 0x2, 0x218, 0x214, 0x3, 0x2, 0x2, 
    0x2, 0x218, 0x215, 0x3, 0x2, 0x2, 0x2, 0x218, 0x216, 0x3, 0x2, 0x2, 
    0x2, 0x218, 0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x21a, 0x21c, 0x7, 0x47, 0x2, 0x2, 0x21b, 0x21d, 0x7, 0x6c, 0x2, 0x2, 
    0x21c, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 
    0x21d, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x221, 0x5, 0x128, 0x95, 0x2, 
    0x21f, 0x220, 0x7, 0x40, 0x2, 0x2, 0x220, 0x222, 0x5, 0x60, 0x31, 0x2, 
    0x221, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 0x2, 0x2, 
    0x222, 0x43, 0x3, 0x2, 0x2, 0x2, 0x223, 0x225, 0x7, 0x3f, 0x2, 0x2, 
    0x224, 0x226, 0x7, 0x6c, 0x2, 0x2, 0x225, 0x224, 0x3, 0x2, 0x2, 0x2, 
    0x225, 0x226, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x3, 0x2, 0x2, 0x2, 
    0x227, 0x228, 0x5, 0x62, 0x32, 0x2, 0x228, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x229, 0x22b, 0x7, 0x46, 0x2, 0x2, 0x22a, 0x22c, 0x7, 0x6c, 0x2, 0x2, 
    0x22b, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 
    0x22c, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x5, 0x62, 0x32, 0x2, 
    0x22e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x231, 0x7, 0x5c, 0x2, 0x2, 
    0x230, 0x232, 0x7, 0x6c, 0x2, 0x2, 0x231, 0x230, 0x3, 0x2, 0x2, 0x2, 
    0x231, 0x232, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 0x2, 0x2, 
    0x233, 0x234, 0x5, 0x60, 0x31, 0x2, 0x234, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x235, 0x237, 0x7, 0x37, 0x2, 0x2, 0x236, 0x238, 0x7, 0x6c, 0x2, 0x2, 
    0x237, 0x236, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 
    0x238, 0x239, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x5, 0x5e, 0x30, 0x2, 
    0x23a, 0x23b, 0x7, 0x7b, 0x2, 0x2, 0x23b, 0x23c, 0x5, 0x5e, 0x30, 0x2, 
    0x23c, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23f, 0x7, 0x53, 0x2, 0x2, 
    0x23e, 0x240, 0x7, 0x6c, 0x2, 0x2, 0x23f, 0x23e, 0x3, 0x2, 0x2, 0x2, 
    0x23f, 0x240, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x242, 0x5, 0x5e, 0x30, 0x2, 0x242, 0x243, 0x7, 0x7b, 0x2, 0x2, 
    0x243, 0x244, 0x5, 0x5e, 0x30, 0x2, 0x244, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x245, 0x247, 0x7, 0x30, 0x2, 0x2, 0x246, 0x248, 0x7, 0x6c, 0x2, 0x2, 
    0x247, 0x246, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x3, 0x2, 0x2, 0x2, 
    0x248, 0x249, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x5, 0x5e, 0x30, 0x2, 
    0x24a, 0x24b, 0x7, 0x7b, 0x2, 0x2, 0x24b, 0x24c, 0x5, 0x5e, 0x30, 0x2, 
    0x24c, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x7, 0x86, 0x2, 0x2, 
    0x24e, 0x24f, 0x5, 0x66, 0x34, 0x2, 0x24f, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x250, 0x251, 0x7, 0x87, 0x2, 0x2, 0x251, 0x252, 0x5, 0x66, 0x34, 0x2, 
    0x252, 0x53, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x7, 0x9, 0x2, 0x2, 0x254, 
    0x255, 0x5, 0x64, 0x33, 0x2, 0x255, 0x55, 0x3, 0x2, 0x2, 0x2, 0x256, 
    0x257, 0x7, 0x48, 0x2, 0x2, 0x257, 0x259, 0x5, 0x128, 0x95, 0x2, 0x258, 
    0x256, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x3, 0x2, 0x2, 0x2, 0x259, 
    0x25f, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25c, 0x5, 0x58, 0x2d, 0x2, 0x25b, 
    0x25d, 0x5, 0x5a, 0x2e, 0x2, 0x25c, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25c, 
    0x25d, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x260, 0x3, 0x2, 0x2, 0x2, 0x25e, 
    0x260, 0x5, 0x5a, 0x2e, 0x2, 0x25f, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25f, 
    0x25e, 0x3, 0x2, 0x2, 0x2, 0x260, 0x264, 0x3, 0x2, 0x2, 0x2, 0x261, 
    0x263, 0x5, 0x5c, 0x2f, 0x2, 0x262, 0x261, 0x3, 0x2, 0x2, 0x2, 0x263, 
    0x266, 0x3, 0x2, 0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x264, 
    0x265, 0x3, 0x2, 0x2, 0x2, 0x265, 0x267, 0x3, 0x2, 0x2, 0x2, 0x266, 
    0x264, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x7, 0x4a, 0x2, 0x2, 0x268, 
    0x269, 0x5, 0x6e, 0x38, 0x2, 0x269, 0x57, 0x3, 0x2, 0x2, 0x2, 0x26a, 
    0x26b, 0x7, 0x69, 0x2, 0x2, 0x26b, 0x26c, 0x5, 0x64, 0x33, 0x2, 0x26c, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x7, 0x2a, 0x2, 0x2, 0x26e, 
    0x26f, 0x5, 0x64, 0x33, 0x2, 0x26f, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x270, 
    0x274, 0x7, 0x60, 0x2, 0x2, 0x271, 0x275, 0x5, 0x128, 0x95, 0x2, 0x272, 
    0x273, 0x7, 0x39, 0x2, 0x2, 0x273, 0x275, 0x5, 0x128, 0x95, 0x2, 0x274, 
    0x271, 0x3, 0x2, 0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 0x2, 0x275, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x276, 0x27c, 0x7, 0x2c, 0x2, 0x2, 0x277, 
    0x279, 0x7, 0x70, 0x2, 0x2, 0x278, 0x277, 0x3, 0x2, 0x2, 0x2, 0x278, 
    0x279, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27a, 
    0x27c, 0x5, 0x128, 0x95, 0x2, 0x27b, 0x276, 0x3, 0x2, 0x2, 0x2, 0x27b, 
    0x278, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 
    0x7, 0x70, 0x2, 0x2, 0x27e, 0x27f, 0x5, 0x128, 0x95, 0x2, 0x27f, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x280, 0x285, 0x5, 0x60, 0x31, 0x2, 0x281, 0x285, 
    0x7, 0x2c, 0x2, 0x2, 0x282, 0x285, 0x7, 0x39, 0x2, 0x2, 0x283, 0x285, 
    0x7, 0x42, 0x2, 0x2, 0x284, 0x280, 0x3, 0x2, 0x2, 0x2, 0x284, 0x281, 
    0x3, 0x2, 0x2, 0x2, 0x284, 0x282, 0x3, 0x2, 0x2, 0x2, 0x284, 0x283, 
    0x3, 0x2, 0x2, 0x2, 0x285, 0x63, 0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x7, 
    0x6, 0x2, 0x2, 0x287, 0x288, 0x5, 0x68, 0x35, 0x2, 0x288, 0x289, 0x7, 
    0x7, 0x2, 0x2, 0x289, 0x65, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x7, 0x6, 
    0x2, 0x2, 0x28b, 0x28c, 0x5, 0x68, 0x35, 0x2, 0x28c, 0x28d, 0x7, 0x7, 
    0x2, 0x2, 0x28d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x290, 0x5, 0x6c, 
    0x37, 0x2, 0x28f, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x3, 0x2, 
    0x2, 0x2, 0x290, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x291, 0x293, 0x5, 0x6a, 
    0x36, 0x2, 0x292, 0x294, 0x7, 0xa, 0x2, 0x2, 0x293, 0x292, 0x3, 0x2, 
    0x2, 0x2, 0x293, 0x294, 0x3, 0x2, 0x2, 0x2, 0x294, 0x296, 0x3, 0x2, 
    0x2, 0x2, 0x295, 0x297, 0x5, 0x6c, 0x37, 0x2, 0x296, 0x295, 0x3, 0x2, 
    0x2, 0x2, 0x296, 0x297, 0x3, 0x2, 0x2, 0x2, 0x297, 0x299, 0x3, 0x2, 
    0x2, 0x2, 0x298, 0x291, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29c, 0x3, 0x2, 
    0x2, 0x2, 0x29a, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29a, 0x29b, 0x3, 0x2, 
    0x2, 0x2, 0x29b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29a, 0x3, 0x2, 0x2, 
    0x2, 0x29d, 0x29e, 0x7, 0x70, 0x2, 0x2, 0x29e, 0x29f, 0x5, 0xdc, 0x6f, 
    0x2, 0x29f, 0x2a1, 0x7, 0x6, 0x2, 0x2, 0x2a0, 0x2a2, 0x5, 0x6c, 0x37, 
    0x2, 0x2a1, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x3, 0x2, 0x2, 
    0x2, 0x2a2, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x7, 0x7, 0x2, 
    0x2, 0x2a4, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2aa, 0x5, 0x9c, 0x4f, 
    0x2, 0x2a6, 0x2a8, 0x7, 0xa, 0x2, 0x2, 0x2a7, 0x2a9, 0x5, 0x6c, 0x37, 
    0x2, 0x2a8, 0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a9, 0x3, 0x2, 0x2, 
    0x2, 0x2a9, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2a6, 0x3, 0x2, 0x2, 
    0x2, 0x2aa, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x2ac, 0x2af, 0x7, 0x6, 0x2, 0x2, 0x2ad, 0x2b0, 0x5, 0x12, 0xa, 0x2, 
    0x2ae, 0x2b0, 0x5, 0x70, 0x39, 0x2, 0x2af, 0x2ad, 0x3, 0x2, 0x2, 0x2, 
    0x2af, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b1, 0x3, 0x2, 0x2, 0x2, 
    0x2b1, 0x2b2, 0x7, 0x7, 0x2, 0x2, 0x2b2, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x2b3, 
    0x2b5, 0x5, 0x74, 0x3b, 0x2, 0x2b4, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b4, 
    0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2b6, 
    0x2b8, 0x5, 0x72, 0x3a, 0x2, 0x2b7, 0x2b6, 0x3, 0x2, 0x2, 0x2, 0x2b8, 
    0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b9, 
    0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2b9, 
    0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2be, 0x5, 0x76, 0x3c, 0x2, 0x2bd, 0x2bf, 
    0x7, 0xa, 0x2, 0x2, 0x2be, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 
    0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c2, 
    0x5, 0x74, 0x3b, 0x2, 0x2c1, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 
    0x3, 0x2, 0x2, 0x2, 0x2c2, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c8, 0x5, 
    0xa8, 0x55, 0x2, 0x2c4, 0x2c6, 0x7, 0xa, 0x2, 0x2, 0x2c5, 0x2c7, 0x5, 
    0x74, 0x3b, 0x2, 0x2c6, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x3, 
    0x2, 0x2, 0x2, 0x2c7, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c4, 0x3, 
    0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x2ca, 0x2d3, 0x5, 0x8c, 0x47, 0x2, 0x2cb, 0x2d3, 0x5, 0x78, 
    0x3d, 0x2, 0x2cc, 0x2d3, 0x5, 0x8a, 0x46, 0x2, 0x2cd, 0x2d3, 0x5, 0x7a, 
    0x3e, 0x2, 0x2ce, 0x2d3, 0x5, 0x7c, 0x3f, 0x2, 0x2cf, 0x2d3, 0x5, 0x8e, 
    0x48, 0x2, 0x2d0, 0x2d3, 0x5, 0x7e, 0x40, 0x2, 0x2d1, 0x2d3, 0x5, 0x80, 
    0x41, 0x2, 0x2d2, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2cb, 0x3, 0x2, 
    0x2, 0x2, 0x2d2, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2cd, 0x3, 0x2, 
    0x2, 0x2, 0x2d2, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2cf, 0x3, 0x2, 
    0x2, 0x2, 0x2d2, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d1, 0x3, 0x2, 
    0x2, 0x2, 0x2d3, 0x77, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 0x7, 0x83, 
    0x2, 0x2, 0x2d5, 0x2d6, 0x5, 0x6e, 0x38, 0x2, 0x2d6, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x2d7, 0x2d8, 0x7, 0x70, 0x2, 0x2, 0x2d8, 0x2d9, 0x5, 0xdc, 
    0x6f, 0x2, 0x2d9, 0x2da, 0x5, 0x6e, 0x38, 0x2, 0x2da, 0x7b, 0x3, 0x2, 
    0x2, 0x2, 0x2db, 0x2dd, 0x7, 0x4e, 0x2, 0x2, 0x2dc, 0x2de, 0x7, 0x6c, 
    0x2, 0x2, 0x2dd, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x2de, 0x3, 0x2, 
    0x2, 0x2, 0x2de, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e0, 0x5, 0xdc, 
    0x6f, 0x2, 0x2e0, 0x2e1, 0x5, 0x6e, 0x38, 0x2, 0x2e1, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x2e2, 0x2e3, 0x7, 0x3e, 0x2, 0x2, 0x2e3, 0x2e4, 0x7, 0x4, 
    0x2, 0x2, 0x2e4, 0x2e5, 0x5, 0xe2, 0x72, 0x2, 0x2e5, 0x2e6, 0x7, 0x41, 
    0x2, 0x2, 0x2e6, 0x2e7, 0x5, 0xde, 0x70, 0x2, 0x2e7, 0x2e8, 0x7, 0x5, 
    0x2, 0x2, 0x2e8, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2ea, 0x7, 0x81, 
    0x2, 0x2, 0x2ea, 0x2eb, 0x5, 0x82, 0x42, 0x2, 0x2eb, 0x81, 0x3, 0x2, 
    0x2, 0x2, 0x2ec, 0x2ef, 0x5, 0x84, 0x43, 0x2, 0x2ed, 0x2ef, 0x5, 0x86, 
    0x44, 0x2, 0x2ee, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ed, 0x3, 0x2, 
    0x2, 0x2, 0x2ef, 0x83, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2f1, 0x5, 0xde, 
    0x70, 0x2, 0x2f1, 0x2f5, 0x7, 0x6, 0x2, 0x2, 0x2f2, 0x2f4, 0x5, 0x88, 
    0x45, 0x2, 0x2f3, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f7, 0x3, 0x2, 
    0x2, 0x2, 0x2f5, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f6, 0x3, 0x2, 
    0x2, 0x2, 0x2f6, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f5, 0x3, 0x2, 
    0x2, 0x2, 0x2f8, 0x2f9, 0x7, 0x7, 0x2, 0x2, 0x2f9, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x2fa, 0x304, 0x7, 0xa5, 0x2, 0x2, 0x2fb, 0x2ff, 0x7, 0x4, 0x2, 
    0x2, 0x2fc, 0x2fe, 0x5, 0xde, 0x70, 0x2, 0x2fd, 0x2fc, 0x3, 0x2, 0x2, 
    0x2, 0x2fe, 0x301, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x2fd, 0x3, 0x2, 0x2, 
    0x2, 0x2ff, 0x300, 0x3, 0x2, 0x2, 0x2, 0x300, 0x302, 0x3, 0x2, 0x2, 
    0x2, 0x301, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x302, 0x304, 0x7, 0x5, 0x2, 
    0x2, 0x303, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x303, 0x2fb, 0x3, 0x2, 0x2, 
    0x2, 0x304, 0x305, 0x3, 0x2, 0x2, 0x2, 0x305, 0x311, 0x7, 0x6, 0x2, 
    0x2, 0x306, 0x30a, 0x7, 0x4, 0x2, 0x2, 0x307, 0x309, 0x5, 0x88, 0x45, 
    0x2, 0x308, 0x307, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30c, 0x3, 0x2, 0x2, 
    0x2, 0x30a, 0x308, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x30b, 0x3, 0x2, 0x2, 
    0x2, 0x30b, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30a, 0x3, 0x2, 0x2, 
    0x2, 0x30d, 0x310, 0x7, 0x5, 0x2, 0x2, 0x30e, 0x310, 0x7, 0xa5, 0x2, 
    0x2, 0x30f, 0x306, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x30e, 0x3, 0x2, 0x2, 
    0x2, 0x310, 0x313, 0x3, 0x2, 0x2, 0x2, 0x311, 0x30f, 0x3, 0x2, 0x2, 
    0x2, 0x311, 0x312, 0x3, 0x2, 0x2, 0x2, 0x312, 0x314, 0x3, 0x2, 0x2, 
    0x2, 0x313, 0x311, 0x3, 0x2, 0x2, 0x2, 0x314, 0x315, 0x7, 0x7, 0x2, 
    0x2, 0x315, 0x87, 0x3, 0x2, 0x2, 0x2, 0x316, 0x31c, 0x5, 0x128, 0x95, 
    0x2, 0x317, 0x31c, 0x5, 0x108, 0x85, 0x2, 0x318, 0x31c, 0x5, 0x10a, 
    0x86, 0x2, 0x319, 0x31c, 0x5, 0x124, 0x93, 0x2, 0x31a, 0x31c, 0x7, 0x29, 
    0x2, 0x2, 0x31b, 0x316, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x317, 0x3, 0x2, 
    0x2, 0x2, 0x31b, 0x318, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x319, 0x3, 0x2, 
    0x2, 0x2, 0x31b, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x31d, 0x31e, 0x7, 0x4f, 0x2, 0x2, 0x31e, 0x31f, 0x5, 0x6e, 0x38, 
    0x2, 0x31f, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x320, 0x325, 0x5, 0x6e, 0x38, 
    0x2, 0x321, 0x322, 0x7, 0x23, 0x2, 0x2, 0x322, 0x324, 0x5, 0x6e, 0x38, 
    0x2, 0x323, 0x321, 0x3, 0x2, 0x2, 0x2, 0x324, 0x327, 0x3, 0x2, 0x2, 
    0x2, 0x325, 0x323, 0x3, 0x2, 0x2, 0x2, 0x325, 0x326, 0x3, 0x2, 0x2, 
    0x2, 0x326, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x327, 0x325, 0x3, 0x2, 0x2, 0x2, 
    0x328, 0x329, 0x7, 0x5f, 0x2, 0x2, 0x329, 0x32a, 0x5, 0x90, 0x49, 0x2, 
    0x32a, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32f, 0x5, 0xf6, 0x7c, 0x2, 
    0x32c, 0x32f, 0x5, 0xf8, 0x7d, 0x2, 0x32d, 0x32f, 0x5, 0x92, 0x4a, 0x2, 
    0x32e, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32c, 0x3, 0x2, 0x2, 0x2, 
    0x32e, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x330, 
    0x331, 0x5, 0x128, 0x95, 0x2, 0x331, 0x332, 0x5, 0x94, 0x4b, 0x2, 0x332, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x333, 0x343, 0x7, 0xa5, 0x2, 0x2, 0x334, 
    0x336, 0x7, 0x4, 0x2, 0x2, 0x335, 0x337, 0x7, 0x73, 0x2, 0x2, 0x336, 
    0x335, 0x3, 0x2, 0x2, 0x2, 0x336, 0x337, 0x3, 0x2, 0x2, 0x2, 0x337, 
    0x338, 0x3, 0x2, 0x2, 0x2, 0x338, 0x33d, 0x5, 0xe2, 0x72, 0x2, 0x339, 
    0x33a, 0x7, 0xb, 0x2, 0x2, 0x33a, 0x33c, 0x5, 0xe2, 0x72, 0x2, 0x33b, 
    0x339, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x33d, 
    0x33b, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x33e, 
    0x340, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x33d, 0x3, 0x2, 0x2, 0x2, 0x340, 
    0x341, 0x7, 0x5, 0x2, 0x2, 0x341, 0x343, 0x3, 0x2, 0x2, 0x2, 0x342, 
    0x333, 0x3, 0x2, 0x2, 0x2, 0x342, 0x334, 0x3, 0x2, 0x2, 0x2, 0x343, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x344, 0x351, 0x7, 0xa5, 0x2, 0x2, 0x345, 
    0x346, 0x7, 0x4, 0x2, 0x2, 0x346, 0x34b, 0x5, 0xe2, 0x72, 0x2, 0x347, 
    0x348, 0x7, 0xb, 0x2, 0x2, 0x348, 0x34a, 0x5, 0xe2, 0x72, 0x2, 0x349, 
    0x347, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34b, 
    0x349, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34c, 
    0x34e, 0x3, 0x2, 0x2, 0x2, 0x34d, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x34e, 
    0x34f, 0x7, 0x5, 0x2, 0x2, 0x34f, 0x351, 0x3, 0x2, 0x2, 0x2, 0x350, 
    0x344, 0x3, 0x2, 0x2, 0x2, 0x350, 0x345, 0x3, 0x2, 0x2, 0x2, 0x351, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x352, 0x354, 0x7, 0x6, 0x2, 0x2, 0x353, 0x355, 
    0x5, 0x9a, 0x4e, 0x2, 0x354, 0x353, 0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 
    0x3, 0x2, 0x2, 0x2, 0x355, 0x356, 0x3, 0x2, 0x2, 0x2, 0x356, 0x357, 
    0x7, 0x7, 0x2, 0x2, 0x357, 0x99, 0x3, 0x2, 0x2, 0x2, 0x358, 0x35d, 0x5, 
    0x9c, 0x4f, 0x2, 0x359, 0x35b, 0x7, 0xa, 0x2, 0x2, 0x35a, 0x35c, 0x5, 
    0x9a, 0x4e, 0x2, 0x35b, 0x35a, 0x3, 0x2, 0x2, 0x2, 0x35b, 0x35c, 0x3, 
    0x2, 0x2, 0x2, 0x35c, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x35d, 0x359, 0x3, 
    0x2, 0x2, 0x2, 0x35d, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x35e, 0x9b, 0x3, 0x2, 
    0x2, 0x2, 0x35f, 0x360, 0x5, 0xda, 0x6e, 0x2, 0x360, 0x361, 0x5, 0xa0, 
    0x51, 0x2, 0x361, 0x366, 0x3, 0x2, 0x2, 0x2, 0x362, 0x363, 0x5, 0xca, 
    0x66, 0x2, 0x363, 0x364, 0x5, 0x9e, 0x50, 0x2, 0x364, 0x366, 0x3, 0x2, 
    0x2, 0x2, 0x365, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x365, 0x362, 0x3, 0x2, 
    0x2, 0x2, 0x366, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x367, 0x369, 0x5, 0xa0, 
    0x51, 0x2, 0x368, 0x367, 0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 0x3, 0x2, 
    0x2, 0x2, 0x369, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36b, 0x5, 0xa2, 
    0x52, 0x2, 0x36b, 0x374, 0x5, 0xa4, 0x53, 0x2, 0x36c, 0x370, 0x7, 0x8, 
    0x2, 0x2, 0x36d, 0x36e, 0x5, 0xa2, 0x52, 0x2, 0x36e, 0x36f, 0x5, 0xa4, 
    0x53, 0x2, 0x36f, 0x371, 0x3, 0x2, 0x2, 0x2, 0x370, 0x36d, 0x3, 0x2, 
    0x2, 0x2, 0x370, 0x371, 0x3, 0x2, 0x2, 0x2, 0x371, 0x373, 0x3, 0x2, 
    0x2, 0x2, 0x372, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x373, 0x376, 0x3, 0x2, 
    0x2, 0x2, 0x374, 0x372, 0x3, 0x2, 0x2, 0x2, 0x374, 0x375, 0x3, 0x2, 
    0x2, 0x2, 0x375, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x376, 0x374, 0x3, 0x2, 0x2, 
    0x2, 0x377, 0x37a, 0x5, 0xdc, 0x6f, 0x2, 0x378, 0x37a, 0x7, 0xc, 0x2, 
    0x2, 0x379, 0x377, 0x3, 0x2, 0x2, 0x2, 0x379, 0x378, 0x3, 0x2, 0x2, 
    0x2, 0x37a, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x380, 0x5, 0xa6, 0x54, 
    0x2, 0x37c, 0x37d, 0x7, 0xb, 0x2, 0x2, 0x37d, 0x37f, 0x5, 0xa6, 0x54, 
    0x2, 0x37e, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x382, 0x3, 0x2, 0x2, 
    0x2, 0x380, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x380, 0x381, 0x3, 0x2, 0x2, 
    0x2, 0x381, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x382, 0x380, 0x3, 0x2, 0x2, 0x2, 
    0x383, 0x384, 0x5, 0xd6, 0x6c, 0x2, 0x384, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0x385, 0x386, 0x5, 0xda, 0x6e, 0x2, 0x386, 0x387, 0x5, 0xac, 0x57, 0x2, 
    0x387, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x388, 0x389, 0x5, 0xce, 0x68, 0x2, 
    0x389, 0x38a, 0x5, 0xaa, 0x56, 0x2, 0x38a, 0x38c, 0x3, 0x2, 0x2, 0x2, 
    0x38b, 0x385, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x388, 0x3, 0x2, 0x2, 0x2, 
    0x38c, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x38d, 0x38f, 0x5, 0xac, 0x57, 0x2, 
    0x38e, 0x38d, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38f, 0x3, 0x2, 0x2, 0x2, 
    0x38f, 0xab, 0x3, 0x2, 0x2, 0x2, 0x390, 0x391, 0x5, 0xae, 0x58, 0x2, 
    0x391, 0x39a, 0x5, 0xb4, 0x5b, 0x2, 0x392, 0x396, 0x7, 0x8, 0x2, 0x2, 
    0x393, 0x394, 0x5, 0xae, 0x58, 0x2, 0x394, 0x395, 0x5, 0xa4, 0x53, 0x2, 
    0x395, 0x397, 0x3, 0x2, 0x2, 0x2, 0x396, 0x393, 0x3, 0x2, 0x2, 0x2, 
    0x396, 0x397, 0x3, 0x2, 0x2, 0x2, 0x397, 0x399, 0x3, 0x2, 0x2, 0x2, 
    0x398, 0x392, 0x3, 0x2, 0x2, 0x2, 0x399, 0x39c, 0x3, 0x2, 0x2, 0x2, 
    0x39a, 0x398, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x3, 0x2, 0x2, 0x2, 
    0x39b, 0xad, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x39d, 
    0x3a0, 0x5, 0xb0, 0x59, 0x2, 0x39e, 0x3a0, 0x5, 0xb2, 0x5a, 0x2, 0x39f, 
    0x39d, 0x3, 0x2, 0x2, 0x2, 0x39f, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x3a0, 
    0xaf, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a2, 0x5, 0xb8, 0x5d, 0x2, 0x3a2, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0x3a3, 0x3a4, 0x5, 0xde, 0x70, 0x2, 0x3a4, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0x3a5, 0x3aa, 0x5, 0xb6, 0x5c, 0x2, 0x3a6, 
    0x3a7, 0x7, 0xb, 0x2, 0x2, 0x3a7, 0x3a9, 0x5, 0xb6, 0x5c, 0x2, 0x3a8, 
    0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3aa, 
    0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3aa, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ab, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0x3ac, 0x3aa, 0x3, 0x2, 0x2, 0x2, 0x3ad, 0x3ae, 
    0x5, 0xd8, 0x6d, 0x2, 0x3ae, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b0, 
    0x5, 0xba, 0x5e, 0x2, 0x3b0, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b6, 
    0x5, 0xbc, 0x5f, 0x2, 0x3b2, 0x3b3, 0x7, 0xd, 0x2, 0x2, 0x3b3, 0x3b5, 
    0x5, 0xbc, 0x5f, 0x2, 0x3b4, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b8, 
    0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b6, 0x3b7, 
    0x3, 0x2, 0x2, 0x2, 0x3b7, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x3b8, 0x3b6, 0x3, 
    0x2, 0x2, 0x2, 0x3b9, 0x3be, 0x5, 0xc0, 0x61, 0x2, 0x3ba, 0x3bb, 0x7, 
    0xe, 0x2, 0x2, 0x3bb, 0x3bd, 0x5, 0xc0, 0x61, 0x2, 0x3bc, 0x3ba, 0x3, 
    0x2, 0x2, 0x2, 0x3bd, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3be, 0x3bc, 0x3, 
    0x2, 0x2, 0x2, 0x3be, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3bf, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0x3c0, 0x3be, 0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c3, 0x5, 0xc4, 
    0x63, 0x2, 0x3c2, 0x3c4, 0x5, 0xc2, 0x62, 0x2, 0x3c3, 0x3c2, 0x3, 0x2, 
    0x2, 0x2, 0x3c3, 0x3c4, 0x3, 0x2, 0x2, 0x2, 0x3c4, 0xbf, 0x3, 0x2, 0x2, 
    0x2, 0x3c5, 0x3c9, 0x5, 0xbe, 0x60, 0x2, 0x3c6, 0x3c7, 0x7, 0xf, 0x2, 
    0x2, 0x3c7, 0x3c9, 0x5, 0xbe, 0x60, 0x2, 0x3c8, 0x3c5, 0x3, 0x2, 0x2, 
    0x2, 0x3c8, 0x3c6, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0x3ca, 0x3cb, 0x9, 0x4, 0x2, 0x2, 0x3cb, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x3cc, 
    0x3d5, 0x5, 0x128, 0x95, 0x2, 0x3cd, 0x3d5, 0x7, 0xc, 0x2, 0x2, 0x3ce, 
    0x3cf, 0x7, 0x12, 0x2, 0x2, 0x3cf, 0x3d5, 0x5, 0xc6, 0x64, 0x2, 0x3d0, 
    0x3d1, 0x7, 0x4, 0x2, 0x2, 0x3d1, 0x3d2, 0x5, 0xb8, 0x5d, 0x2, 0x3d2, 
    0x3d3, 0x7, 0x5, 0x2, 0x2, 0x3d3, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3d4, 
    0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3cd, 0x3, 0x2, 0x2, 0x2, 0x3d4, 
    0x3ce, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d0, 0x3, 0x2, 0x2, 0x2, 0x3d5, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3e4, 0x5, 0xc8, 0x65, 0x2, 0x3d7, 
    0x3e0, 0x7, 0x4, 0x2, 0x2, 0x3d8, 0x3dd, 0x5, 0xc8, 0x65, 0x2, 0x3d9, 
    0x3da, 0x7, 0xd, 0x2, 0x2, 0x3da, 0x3dc, 0x5, 0xc8, 0x65, 0x2, 0x3db, 
    0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3df, 0x3, 0x2, 0x2, 0x2, 0x3dd, 
    0x3db, 0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3de, 0x3, 0x2, 0x2, 0x2, 0x3de, 
    0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3df, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x3e0, 
    0x3d8, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e1, 
    0x3e2, 0x3, 0x2, 0x2, 0x2, 0x3e2, 0x3e4, 0x7, 0x5, 0x2, 0x2, 0x3e3, 
    0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3e3, 0x3d7, 0x3, 0x2, 0x2, 0x2, 0x3e4, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3ed, 0x5, 0x128, 0x95, 0x2, 0x3e6, 
    0x3ed, 0x7, 0xc, 0x2, 0x2, 0x3e7, 0x3ea, 0x7, 0xf, 0x2, 0x2, 0x3e8, 
    0x3eb, 0x5, 0x128, 0x95, 0x2, 0x3e9, 0x3eb, 0x7, 0xc, 0x2, 0x2, 0x3ea, 
    0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3ea, 0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3eb, 
    0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3ec, 
    0x3e6, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3e7, 0x3, 0x2, 0x2, 0x2, 0x3ed, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0x3ee, 0x3f1, 0x5, 0xd2, 0x6a, 0x2, 0x3ef, 
    0x3f1, 0x5, 0xcc, 0x67, 0x2, 0x3f0, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0x3f0, 
    0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f3, 
    0x7, 0x13, 0x2, 0x2, 0x3f3, 0x3f4, 0x5, 0xa0, 0x51, 0x2, 0x3f4, 0x3f5, 
    0x7, 0x14, 0x2, 0x2, 0x3f5, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f9, 
    0x5, 0xd4, 0x6b, 0x2, 0x3f7, 0x3f9, 0x5, 0xd0, 0x69, 0x2, 0x3f8, 0x3f6, 
    0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f9, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0x3fa, 0x3fb, 0x7, 0x13, 0x2, 0x2, 0x3fb, 0x3fc, 0x5, 
    0xac, 0x57, 0x2, 0x3fc, 0x3fd, 0x7, 0x14, 0x2, 0x2, 0x3fd, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0x3fe, 0x400, 0x7, 0x4, 0x2, 0x2, 0x3ff, 0x401, 0x5, 
    0xd6, 0x6c, 0x2, 0x400, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x3, 
    0x2, 0x2, 0x2, 0x402, 0x400, 0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 0x3, 
    0x2, 0x2, 0x2, 0x403, 0x404, 0x3, 0x2, 0x2, 0x2, 0x404, 0x405, 0x7, 
    0x5, 0x2, 0x2, 0x405, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x406, 0x408, 0x7, 0x4, 
    0x2, 0x2, 0x407, 0x409, 0x5, 0xd8, 0x6d, 0x2, 0x408, 0x407, 0x3, 0x2, 
    0x2, 0x2, 0x409, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x408, 0x3, 0x2, 
    0x2, 0x2, 0x40a, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 0x3, 0x2, 
    0x2, 0x2, 0x40c, 0x40d, 0x7, 0x5, 0x2, 0x2, 0x40d, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0x40e, 0x411, 0x5, 0xda, 0x6e, 0x2, 0x40f, 0x411, 0x5, 0xca, 0x66, 
    0x2, 0x410, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x410, 0x40f, 0x3, 0x2, 0x2, 
    0x2, 0x411, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x412, 0x415, 0x5, 0xda, 0x6e, 
    0x2, 0x413, 0x415, 0x5, 0xce, 0x68, 0x2, 0x414, 0x412, 0x3, 0x2, 0x2, 
    0x2, 0x414, 0x413, 0x3, 0x2, 0x2, 0x2, 0x415, 0xd9, 0x3, 0x2, 0x2, 0x2, 
    0x416, 0x419, 0x5, 0xde, 0x70, 0x2, 0x417, 0x419, 0x5, 0xe0, 0x71, 0x2, 
    0x418, 0x416, 0x3, 0x2, 0x2, 0x2, 0x418, 0x417, 0x3, 0x2, 0x2, 0x2, 
    0x419, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41d, 0x5, 0xde, 0x70, 0x2, 
    0x41b, 0x41d, 0x5, 0x128, 0x95, 0x2, 0x41c, 0x41a, 0x3, 0x2, 0x2, 0x2, 
    0x41c, 0x41b, 0x3, 0x2, 0x2, 0x2, 0x41d, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x41e, 
    0x41f, 0x9, 0x5, 0x2, 0x2, 0x41f, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x420, 0x427, 
    0x5, 0x128, 0x95, 0x2, 0x421, 0x427, 0x5, 0x108, 0x85, 0x2, 0x422, 0x427, 
    0x5, 0x10a, 0x86, 0x2, 0x423, 0x427, 0x5, 0x124, 0x93, 0x2, 0x424, 0x427, 
    0x5, 0x12c, 0x97, 0x2, 0x425, 0x427, 0x7, 0xa5, 0x2, 0x2, 0x426, 0x420, 
    0x3, 0x2, 0x2, 0x2, 0x426, 0x421, 0x3, 0x2, 0x2, 0x2, 0x426, 0x422, 
    0x3, 0x2, 0x2, 0x2, 0x426, 0x423, 0x3, 0x2, 0x2, 0x2, 0x426, 0x424, 
    0x3, 0x2, 0x2, 0x2, 0x426, 0x425, 0x3, 0x2, 0x2, 0x2, 0x427, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0x428, 0x429, 0x5, 0xe4, 0x73, 0x2, 0x429, 0xe3, 0x3, 
    0x2, 0x2, 0x2, 0x42a, 0x42f, 0x5, 0xe6, 0x74, 0x2, 0x42b, 0x42c, 0x7, 
    0x15, 0x2, 0x2, 0x42c, 0x42e, 0x5, 0xe6, 0x74, 0x2, 0x42d, 0x42b, 0x3, 
    0x2, 0x2, 0x2, 0x42e, 0x431, 0x3, 0x2, 0x2, 0x2, 0x42f, 0x42d, 0x3, 
    0x2, 0x2, 0x2, 0x42f, 0x430, 0x3, 0x2, 0x2, 0x2, 0x430, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0x431, 0x42f, 0x3, 0x2, 0x2, 0x2, 0x432, 0x437, 0x5, 0xe8, 
    0x75, 0x2, 0x433, 0x434, 0x7, 0x16, 0x2, 0x2, 0x434, 0x436, 0x5, 0xe8, 
    0x75, 0x2, 0x435, 0x433, 0x3, 0x2, 0x2, 0x2, 0x436, 0x439, 0x3, 0x2, 
    0x2, 0x2, 0x437, 0x435, 0x3, 0x2, 0x2, 0x2, 0x437, 0x438, 0x3, 0x2, 
    0x2, 0x2, 0x438, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x439, 0x437, 0x3, 0x2, 0x2, 
    0x2, 0x43a, 0x43b, 0x5, 0xea, 0x76, 0x2, 0x43b, 0xe9, 0x3, 0x2, 0x2, 
    0x2, 0x43c, 0x44e, 0x5, 0xec, 0x77, 0x2, 0x43d, 0x43e, 0x7, 0x17, 0x2, 
    0x2, 0x43e, 0x44f, 0x5, 0xec, 0x77, 0x2, 0x43f, 0x440, 0x7, 0x18, 0x2, 
    0x2, 0x440, 0x44f, 0x5, 0xec, 0x77, 0x2, 0x441, 0x442, 0x7, 0x19, 0x2, 
    0x2, 0x442, 0x44f, 0x5, 0xec, 0x77, 0x2, 0x443, 0x444, 0x7, 0x1a, 0x2, 
    0x2, 0x444, 0x44f, 0x5, 0xec, 0x77, 0x2, 0x445, 0x446, 0x7, 0x1b, 0x2, 
    0x2, 0x446, 0x44f, 0x5, 0xec, 0x77, 0x2, 0x447, 0x448, 0x7, 0x1c, 0x2, 
    0x2, 0x448, 0x44f, 0x5, 0xec, 0x77, 0x2, 0x449, 0x44a, 0x7, 0x28, 0x2, 
    0x2, 0x44a, 0x44f, 0x5, 0x96, 0x4c, 0x2, 0x44b, 0x44c, 0x7, 0x61, 0x2, 
    0x2, 0x44c, 0x44d, 0x7, 0x28, 0x2, 0x2, 0x44d, 0x44f, 0x5, 0x96, 0x4c, 
    0x2, 0x44e, 0x43d, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x43f, 0x3, 0x2, 0x2, 
    0x2, 0x44e, 0x441, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x443, 0x3, 0x2, 0x2, 
    0x2, 0x44e, 0x445, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x447, 0x3, 0x2, 0x2, 
    0x2, 0x44e, 0x449, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x44b, 0x3, 0x2, 0x2, 
    0x2, 0x44e, 0x44f, 0x3, 0x2, 0x2, 0x2, 0x44f, 0xeb, 0x3, 0x2, 0x2, 0x2, 
    0x450, 0x451, 0x5, 0xee, 0x78, 0x2, 0x451, 0xed, 0x3, 0x2, 0x2, 0x2, 
    0x452, 0x466, 0x5, 0xf0, 0x79, 0x2, 0x453, 0x454, 0x7, 0x11, 0x2, 0x2, 
    0x454, 0x465, 0x5, 0xf0, 0x79, 0x2, 0x455, 0x456, 0x7, 0x1d, 0x2, 0x2, 
    0x456, 0x465, 0x5, 0xf0, 0x79, 0x2, 0x457, 0x45a, 0x5, 0x10e, 0x88, 
    0x2, 0x458, 0x45a, 0x5, 0x110, 0x89, 0x2, 0x459, 0x457, 0x3, 0x2, 0x2, 
    0x2, 0x459, 0x458, 0x3, 0x2, 0x2, 0x2, 0x45a, 0x461, 0x3, 0x2, 0x2, 
    0x2, 0x45b, 0x45c, 0x7, 0x3, 0x2, 0x2, 0x45c, 0x460, 0x5, 0xf2, 0x7a, 
    0x2, 0x45d, 0x45e, 0x7, 0xe, 0x2, 0x2, 0x45e, 0x460, 0x5, 0xf2, 0x7a, 
    0x2, 0x45f, 0x45b, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x45d, 0x3, 0x2, 0x2, 
    0x2, 0x460, 0x463, 0x3, 0x2, 0x2, 0x2, 0x461, 0x45f, 0x3, 0x2, 0x2, 
    0x2, 0x461, 0x462, 0x3, 0x2, 0x2, 0x2, 0x462, 0x465, 0x3, 0x2, 0x2, 
    0x2, 0x463, 0x461, 0x3, 0x2, 0x2, 0x2, 0x464, 0x453, 0x3, 0x2, 0x2, 
    0x2, 0x464, 0x455, 0x3, 0x2, 0x2, 0x2, 0x464, 0x459, 0x3, 0x2, 0x2, 
    0x2, 0x465, 0x468, 0x3, 0x2, 0x2, 0x2, 0x466, 0x464, 0x3, 0x2, 0x2, 
    0x2, 0x466, 0x467, 0x3, 0x2, 0x2, 0x2, 0x467, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0x468, 0x466, 0x3, 0x2, 0x2, 0x2, 0x469, 0x470, 0x5, 0xf2, 0x7a, 0x2, 
    0x46a, 0x46b, 0x7, 0x3, 0x2, 0x2, 0x46b, 0x46f, 0x5, 0xf2, 0x7a, 0x2, 
    0x46c, 0x46d, 0x7, 0xe, 0x2, 0x2, 0x46d, 0x46f, 0x5, 0xf2, 0x7a, 0x2, 
    0x46e, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x46e, 0x46c, 0x3, 0x2, 0x2, 0x2, 
    0x46f, 0x472, 0x3, 0x2, 0x2, 0x2, 0x470, 0x46e, 0x3, 0x2, 0x2, 0x2, 
    0x470, 0x471, 0x3, 0x2, 0x2, 0x2, 0x471, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x472, 
    0x470, 0x3, 0x2, 0x2, 0x2, 0x473, 0x474, 0x7, 0x12, 0x2, 0x2, 0x474, 
    0x47b, 0x5, 0xf4, 0x7b, 0x2, 0x475, 0x476, 0x7, 0x11, 0x2, 0x2, 0x476, 
    0x47b, 0x5, 0xf4, 0x7b, 0x2, 0x477, 0x478, 0x7, 0x1d, 0x2, 0x2, 0x478, 
    0x47b, 0x5, 0xf4, 0x7b, 0x2, 0x479, 0x47b, 0x5, 0xf4, 0x7b, 0x2, 0x47a, 
    0x473, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x475, 0x3, 0x2, 0x2, 0x2, 0x47a, 
    0x477, 0x3, 0x2, 0x2, 0x2, 0x47a, 0x479, 0x3, 0x2, 0x2, 0x2, 0x47b, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0x47c, 0x484, 0x5, 0xf6, 0x7c, 0x2, 0x47d, 
    0x484, 0x5, 0xf8, 0x7d, 0x2, 0x47e, 0x484, 0x5, 0x106, 0x84, 0x2, 0x47f, 
    0x484, 0x5, 0x108, 0x85, 0x2, 0x480, 0x484, 0x5, 0x10a, 0x86, 0x2, 0x481, 
    0x484, 0x5, 0x124, 0x93, 0x2, 0x482, 0x484, 0x5, 0xde, 0x70, 0x2, 0x483, 
    0x47c, 0x3, 0x2, 0x2, 0x2, 0x483, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x483, 
    0x47e, 0x3, 0x2, 0x2, 0x2, 0x483, 0x47f, 0x3, 0x2, 0x2, 0x2, 0x483, 
    0x480, 0x3, 0x2, 0x2, 0x2, 0x483, 0x481, 0x3, 0x2, 0x2, 0x2, 0x483, 
    0x482, 0x3, 0x2, 0x2, 0x2, 0x484, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x485, 0x486, 
    0x7, 0x4, 0x2, 0x2, 0x486, 0x487, 0x5, 0xe2, 0x72, 0x2, 0x487, 0x488, 
    0x7, 0x5, 0x2, 0x2, 0x488, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x489, 0x58c, 0x5, 
    0x104, 0x83, 0x2, 0x48a, 0x48b, 0x7, 0x52, 0x2, 0x2, 0x48b, 0x48c, 0x7, 
    0x4, 0x2, 0x2, 0x48c, 0x48d, 0x5, 0xe2, 0x72, 0x2, 0x48d, 0x48e, 0x7, 
    0x5, 0x2, 0x2, 0x48e, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x490, 0x7, 
    0x5b, 0x2, 0x2, 0x490, 0x491, 0x7, 0x4, 0x2, 0x2, 0x491, 0x492, 0x5, 
    0xe2, 0x72, 0x2, 0x492, 0x493, 0x7, 0x5, 0x2, 0x2, 0x493, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x494, 0x495, 0x7, 0x79, 0x2, 0x2, 0x495, 0x496, 0x7, 
    0x4, 0x2, 0x2, 0x496, 0x497, 0x5, 0xe2, 0x72, 0x2, 0x497, 0x498, 0x7, 
    0xb, 0x2, 0x2, 0x498, 0x499, 0x5, 0xe2, 0x72, 0x2, 0x499, 0x49a, 0x7, 
    0x5, 0x2, 0x2, 0x49a, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x49b, 0x49c, 0x7, 
    0x33, 0x2, 0x2, 0x49c, 0x49d, 0x7, 0x4, 0x2, 0x2, 0x49d, 0x49e, 0x5, 
    0xe2, 0x72, 0x2, 0x49e, 0x49f, 0x7, 0x5, 0x2, 0x2, 0x49f, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x4a0, 0x4a1, 0x7, 0x38, 0x2, 0x2, 0x4a1, 0x4a2, 0x7, 
    0x4, 0x2, 0x2, 0x4a2, 0x4a3, 0x5, 0xde, 0x70, 0x2, 0x4a3, 0x4a4, 0x7, 
    0x5, 0x2, 0x2, 0x4a4, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x4a5, 0x4a6, 0x7, 
    0x43, 0x2, 0x2, 0x4a6, 0x4a7, 0x7, 0x4, 0x2, 0x2, 0x4a7, 0x4a8, 0x5, 
    0xe2, 0x72, 0x2, 0x4a8, 0x4a9, 0x7, 0x5, 0x2, 0x2, 0x4a9, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x4aa, 0x4ab, 0x7, 0x72, 0x2, 0x2, 0x4ab, 0x4ac, 0x7, 
    0x4, 0x2, 0x2, 0x4ac, 0x4ad, 0x5, 0xe2, 0x72, 0x2, 0x4ad, 0x4ae, 0x7, 
    0x5, 0x2, 0x2, 0x4ae, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b5, 0x7, 
    0x49, 0x2, 0x2, 0x4b0, 0x4b1, 0x7, 0x4, 0x2, 0x2, 0x4b1, 0x4b2, 0x5, 
    0xe2, 0x72, 0x2, 0x4b2, 0x4b3, 0x7, 0x5, 0x2, 0x2, 0x4b3, 0x4b6, 0x3, 
    0x2, 0x2, 0x2, 0x4b4, 0x4b6, 0x7, 0xa5, 0x2, 0x2, 0x4b5, 0x4b0, 0x3, 
    0x2, 0x2, 0x2, 0x4b5, 0x4b4, 0x3, 0x2, 0x2, 0x2, 0x4b6, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x4b7, 0x4b8, 0x7, 0x7d, 0x2, 0x2, 0x4b8, 0x58c, 0x7, 
    0xa5, 0x2, 0x2, 0x4b9, 0x4ba, 0x7, 0x57, 0x2, 0x2, 0x4ba, 0x4bb, 0x7, 
    0x4, 0x2, 0x2, 0x4bb, 0x4bc, 0x5, 0xe2, 0x72, 0x2, 0x4bc, 0x4bd, 0x7, 
    0x5, 0x2, 0x2, 0x4bd, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x4be, 0x4bf, 0x7, 
    0x31, 0x2, 0x2, 0x4bf, 0x4c0, 0x7, 0x4, 0x2, 0x2, 0x4c0, 0x4c1, 0x5, 
    0xe2, 0x72, 0x2, 0x4c1, 0x4c2, 0x7, 0x5, 0x2, 0x2, 0x4c2, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x4c3, 0x4c4, 0x7, 0x2e, 0x2, 0x2, 0x4c4, 0x4c5, 0x7, 
    0x4, 0x2, 0x2, 0x4c5, 0x4c6, 0x5, 0xe2, 0x72, 0x2, 0x4c6, 0x4c7, 0x7, 
    0x5, 0x2, 0x2, 0x4c7, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c9, 0x7, 
    0x6f, 0x2, 0x2, 0x4c9, 0x4ca, 0x7, 0x4, 0x2, 0x2, 0x4ca, 0x4cb, 0x5, 
    0xe2, 0x72, 0x2, 0x4cb, 0x4cc, 0x7, 0x5, 0x2, 0x2, 0x4cc, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x4cd, 0x4ce, 0x7, 0x27, 0x2, 0x2, 0x4ce, 0x58c, 0x5, 
    0x96, 0x4c, 0x2, 0x4cf, 0x58c, 0x5, 0xfc, 0x7f, 0x2, 0x4d0, 0x4d1, 0x7, 
    0x5a, 0x2, 0x2, 0x4d1, 0x4d2, 0x7, 0x4, 0x2, 0x2, 0x4d2, 0x4d3, 0x5, 
    0xe2, 0x72, 0x2, 0x4d3, 0x4d4, 0x7, 0x5, 0x2, 0x2, 0x4d4, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x4d5, 0x58c, 0x5, 0xfe, 0x80, 0x2, 0x4d6, 0x4d7, 0x7, 
    0x4d, 0x2, 0x2, 0x4d7, 0x4d8, 0x7, 0x4, 0x2, 0x2, 0x4d8, 0x4d9, 0x5, 
    0xe2, 0x72, 0x2, 0x4d9, 0x4da, 0x7, 0x5, 0x2, 0x2, 0x4da, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x4db, 0x4dc, 0x7, 0x82, 0x2, 0x2, 0x4dc, 0x4dd, 0x7, 
    0x4, 0x2, 0x2, 0x4dd, 0x4de, 0x5, 0xe2, 0x72, 0x2, 0x4de, 0x4df, 0x7, 
    0x5, 0x2, 0x2, 0x4df, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x4e0, 0x4e1, 0x7, 
    0x88, 0x2, 0x2, 0x4e1, 0x4e2, 0x7, 0x4, 0x2, 0x2, 0x4e2, 0x4e3, 0x5, 
    0xe2, 0x72, 0x2, 0x4e3, 0x4e4, 0x7, 0x5, 0x2, 0x2, 0x4e4, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x4e5, 0x4e6, 0x7, 0x64, 0x2, 0x2, 0x4e6, 0x4e7, 0x7, 
    0x4, 0x2, 0x2, 0x4e7, 0x4e8, 0x5, 0xe2, 0x72, 0x2, 0x4e8, 0x4e9, 0x7, 
    0xb, 0x2, 0x2, 0x4e9, 0x4ea, 0x5, 0xe2, 0x72, 0x2, 0x4ea, 0x4eb, 0x7, 
    0x5, 0x2, 0x2, 0x4eb, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ed, 0x7, 
    0x51, 0x2, 0x2, 0x4ed, 0x4ee, 0x7, 0x4, 0x2, 0x2, 0x4ee, 0x4ef, 0x5, 
    0xe2, 0x72, 0x2, 0x4ef, 0x4f0, 0x7, 0xb, 0x2, 0x2, 0x4f0, 0x4f1, 0x5, 
    0xe2, 0x72, 0x2, 0x4f1, 0x4f2, 0x7, 0x5, 0x2, 0x2, 0x4f2, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x4f3, 0x4f4, 0x7, 0x62, 0x2, 0x2, 0x4f4, 0x4f5, 0x7, 
    0x4, 0x2, 0x2, 0x4f5, 0x4f6, 0x5, 0xe2, 0x72, 0x2, 0x4f6, 0x4f7, 0x7, 
    0xb, 0x2, 0x2, 0x4f7, 0x4f8, 0x5, 0xe2, 0x72, 0x2, 0x4f8, 0x4f9, 0x7, 
    0x5, 0x2, 0x2, 0x4f9, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x4fa, 0x4fb, 0x7, 
    0x56, 0x2, 0x2, 0x4fb, 0x4fc, 0x7, 0x4, 0x2, 0x2, 0x4fc, 0x4fd, 0x5, 
    0xe2, 0x72, 0x2, 0x4fd, 0x4fe, 0x7, 0xb, 0x2, 0x2, 0x4fe, 0x4ff, 0x5, 
    0xe2, 0x72, 0x2, 0x4ff, 0x500, 0x7, 0x5, 0x2, 0x2, 0x500, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x501, 0x502, 0x7, 0x59, 0x2, 0x2, 0x502, 0x503, 0x7, 
    0x4, 0x2, 0x2, 0x503, 0x504, 0x5, 0xe2, 0x72, 0x2, 0x504, 0x505, 0x7, 
    0xb, 0x2, 0x2, 0x505, 0x506, 0x5, 0xe2, 0x72, 0x2, 0x506, 0x507, 0x7, 
    0x5, 0x2, 0x2, 0x507, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x508, 0x509, 0x7, 
    0x22, 0x2, 0x2, 0x509, 0x50a, 0x7, 0x4, 0x2, 0x2, 0x50a, 0x50b, 0x5, 
    0xe2, 0x72, 0x2, 0x50b, 0x50c, 0x7, 0x5, 0x2, 0x2, 0x50c, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x50d, 0x50e, 0x7, 0x2b, 0x2, 0x2, 0x50e, 0x50f, 0x7, 
    0x4, 0x2, 0x2, 0x50f, 0x510, 0x5, 0xe2, 0x72, 0x2, 0x510, 0x511, 0x7, 
    0x5, 0x2, 0x2, 0x511, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x512, 0x513, 0x7, 
    0x6b, 0x2, 0x2, 0x513, 0x514, 0x7, 0x4, 0x2, 0x2, 0x514, 0x515, 0x5, 
    0xe2, 0x72, 0x2, 0x515, 0x516, 0x7, 0x5, 0x2, 0x2, 0x516, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x517, 0x518, 0x7, 0x32, 0x2, 0x2, 0x518, 0x519, 0x7, 
    0x4, 0x2, 0x2, 0x519, 0x51a, 0x5, 0xe2, 0x72, 0x2, 0x51a, 0x51b, 0x7, 
    0x5, 0x2, 0x2, 0x51b, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51d, 0x7, 
    0x66, 0x2, 0x2, 0x51d, 0x51e, 0x7, 0x4, 0x2, 0x2, 0x51e, 0x51f, 0x5, 
    0xe2, 0x72, 0x2, 0x51f, 0x520, 0x7, 0x5, 0x2, 0x2, 0x520, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x521, 0x522, 0x7, 0x71, 0x2, 0x2, 0x522, 0x523, 0x7, 
    0x4, 0x2, 0x2, 0x523, 0x524, 0x5, 0xe2, 0x72, 0x2, 0x524, 0x525, 0x7, 
    0x5, 0x2, 0x2, 0x525, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x526, 0x527, 0x7, 
    0x3a, 0x2, 0x2, 0x527, 0x528, 0x7, 0x4, 0x2, 0x2, 0x528, 0x529, 0x5, 
    0xe2, 0x72, 0x2, 0x529, 0x52a, 0x7, 0x5, 0x2, 0x2, 0x52a, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x52b, 0x52c, 0x7, 0x2f, 0x2, 0x2, 0x52c, 0x52d, 0x7, 
    0x4, 0x2, 0x2, 0x52d, 0x52e, 0x5, 0xe2, 0x72, 0x2, 0x52e, 0x52f, 0x7, 
    0x5, 0x2, 0x2, 0x52f, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x530, 0x531, 0x7, 
    0x21, 0x2, 0x2, 0x531, 0x58c, 0x7, 0xa5, 0x2, 0x2, 0x532, 0x533, 0x7, 
    0x3d, 0x2, 0x2, 0x533, 0x58c, 0x7, 0xa5, 0x2, 0x2, 0x534, 0x535, 0x7, 
    0x35, 0x2, 0x2, 0x535, 0x58c, 0x7, 0xa5, 0x2, 0x2, 0x536, 0x537, 0x7, 
    0x89, 0x2, 0x2, 0x537, 0x538, 0x7, 0x4, 0x2, 0x2, 0x538, 0x539, 0x5, 
    0xe2, 0x72, 0x2, 0x539, 0x53a, 0x7, 0x5, 0x2, 0x2, 0x53a, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x53b, 0x53c, 0x7, 0x8a, 0x2, 0x2, 0x53c, 0x53d, 0x7, 
    0x4, 0x2, 0x2, 0x53d, 0x53e, 0x5, 0xe2, 0x72, 0x2, 0x53e, 0x53f, 0x7, 
    0x5, 0x2, 0x2, 0x53f, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x540, 0x541, 0x7, 
    0x8b, 0x2, 0x2, 0x541, 0x542, 0x7, 0x4, 0x2, 0x2, 0x542, 0x543, 0x5, 
    0xe2, 0x72, 0x2, 0x543, 0x544, 0x7, 0x5, 0x2, 0x2, 0x544, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x545, 0x546, 0x7, 0x8c, 0x2, 0x2, 0x546, 0x547, 0x7, 
    0x4, 0x2, 0x2, 0x547, 0x548, 0x5, 0xe2, 0x72, 0x2, 0x548, 0x549, 0x7, 
    0x5, 0x2, 0x2, 0x549, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x54a, 0x54b, 0x7, 
    0x8d, 0x2, 0x2, 0x54b, 0x54c, 0x7, 0x4, 0x2, 0x2, 0x54c, 0x54d, 0x5, 
    0xe2, 0x72, 0x2, 0x54d, 0x54e, 0x7, 0x5, 0x2, 0x2, 0x54e, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x54f, 0x550, 0x7, 0x55, 0x2, 0x2, 0x550, 0x58c, 0x5, 
    0x96, 0x4c, 0x2, 0x551, 0x552, 0x7, 0x24, 0x2, 0x2, 0x552, 0x553, 0x7, 
    0x4, 0x2, 0x2, 0x553, 0x554, 0x5, 0xe2, 0x72, 0x2, 0x554, 0x555, 0x7, 
    0xb, 0x2, 0x2, 0x555, 0x556, 0x5, 0xe2, 0x72, 0x2, 0x556, 0x557, 0x7, 
    0xb, 0x2, 0x2, 0x557, 0x558, 0x5, 0xe2, 0x72, 0x2, 0x558, 0x559, 0x7, 
    0x5, 0x2, 0x2, 0x559, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x55b, 0x7, 
    0x6d, 0x2, 0x2, 0x55b, 0x55c, 0x7, 0x4, 0x2, 0x2, 0x55c, 0x55d, 0x5, 
    0xe2, 0x72, 0x2, 0x55d, 0x55e, 0x7, 0xb, 0x2, 0x2, 0x55e, 0x55f, 0x5, 
    0xe2, 0x72, 0x2, 0x55f, 0x560, 0x7, 0x5, 0x2, 0x2, 0x560, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x561, 0x562, 0x7, 0x7e, 0x2, 0x2, 0x562, 0x563, 0x7, 
    0x4, 0x2, 0x2, 0x563, 0x564, 0x5, 0xe2, 0x72, 0x2, 0x564, 0x565, 0x7, 
    0xb, 0x2, 0x2, 0x565, 0x566, 0x5, 0xe2, 0x72, 0x2, 0x566, 0x567, 0x7, 
    0x5, 0x2, 0x2, 0x567, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x568, 0x569, 0x7, 
    0x50, 0x2, 0x2, 0x569, 0x56a, 0x7, 0x4, 0x2, 0x2, 0x56a, 0x56b, 0x5, 
    0xe2, 0x72, 0x2, 0x56b, 0x56c, 0x7, 0xb, 0x2, 0x2, 0x56c, 0x56d, 0x5, 
    0xe2, 0x72, 0x2, 0x56d, 0x56e, 0x7, 0x5, 0x2, 0x2, 0x56e, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x56f, 0x570, 0x7, 0x7c, 0x2, 0x2, 0x570, 0x571, 0x7, 
    0x4, 0x2, 0x2, 0x571, 0x572, 0x5, 0xe2, 0x72, 0x2, 0x572, 0x573, 0x7, 
    0x5, 0x2, 0x2, 0x573, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x574, 0x575, 0x7, 
    0x7a, 0x2, 0x2, 0x575, 0x576, 0x7, 0x4, 0x2, 0x2, 0x576, 0x577, 0x5, 
    0xe2, 0x72, 0x2, 0x577, 0x578, 0x7, 0x5, 0x2, 0x2, 0x578, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x579, 0x57a, 0x7, 0x3c, 0x2, 0x2, 0x57a, 0x57b, 0x7, 
    0x4, 0x2, 0x2, 0x57b, 0x57c, 0x5, 0xe2, 0x72, 0x2, 0x57c, 0x57d, 0x7, 
    0x5, 0x2, 0x2, 0x57d, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x57e, 0x57f, 0x7, 
    0x58, 0x2, 0x2, 0x57f, 0x580, 0x7, 0x4, 0x2, 0x2, 0x580, 0x581, 0x5, 
    0xe2, 0x72, 0x2, 0x581, 0x582, 0x7, 0x5, 0x2, 0x2, 0x582, 0x58c, 0x3, 
    0x2, 0x2, 0x2, 0x583, 0x584, 0x7, 0x34, 0x2, 0x2, 0x584, 0x585, 0x7, 
    0x4, 0x2, 0x2, 0x585, 0x586, 0x5, 0xe2, 0x72, 0x2, 0x586, 0x587, 0x7, 
    0x5, 0x2, 0x2, 0x587, 0x58c, 0x3, 0x2, 0x2, 0x2, 0x588, 0x58c, 0x5, 
    0xfa, 0x7e, 0x2, 0x589, 0x58c, 0x5, 0x100, 0x81, 0x2, 0x58a, 0x58c, 
    0x5, 0x102, 0x82, 0x2, 0x58b, 0x489, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x48a, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x494, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x49b, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x4a0, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x4a5, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x4aa, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x4b7, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x4b9, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x4be, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x4c3, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x4c8, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x4cd, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x4cf, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x4d5, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x4db, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x4e5, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x4f3, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x4fa, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x501, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x508, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x50d, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x512, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x517, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x521, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x526, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x52b, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x530, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x532, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x534, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x536, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x540, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x545, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x54a, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x54f, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x551, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x561, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x568, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x56f, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x574, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x579, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x57e, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x583, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x588, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x589, 
    0x3, 0x2, 0x2, 0x2, 0x58b, 0x58a, 0x3, 0x2, 0x2, 0x2, 0x58c, 0xf9, 0x3, 
    0x2, 0x2, 0x2, 0x58d, 0x58e, 0x7, 0x68, 0x2, 0x2, 0x58e, 0x58f, 0x7, 
    0x4, 0x2, 0x2, 0x58f, 0x590, 0x5, 0xe2, 0x72, 0x2, 0x590, 0x591, 0x7, 
    0xb, 0x2, 0x2, 0x591, 0x594, 0x5, 0xe2, 0x72, 0x2, 0x592, 0x593, 0x7, 
    0xb, 0x2, 0x2, 0x593, 0x595, 0x5, 0xe2, 0x72, 0x2, 0x594, 0x592, 0x3, 
    0x2, 0x2, 0x2, 0x594, 0x595, 0x3, 0x2, 0x2, 0x2, 0x595, 0x596, 0x3, 
    0x2, 0x2, 0x2, 0x596, 0x597, 0x7, 0x5, 0x2, 0x2, 0x597, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0x598, 0x599, 0x7, 0x85, 0x2, 0x2, 0x599, 0x59a, 0x7, 0x4, 
    0x2, 0x2, 0x59a, 0x59b, 0x5, 0xe2, 0x72, 0x2, 0x59b, 0x59c, 0x7, 0xb, 
    0x2, 0x2, 0x59c, 0x59f, 0x5, 0xe2, 0x72, 0x2, 0x59d, 0x59e, 0x7, 0xb, 
    0x2, 0x2, 0x59e, 0x5a0, 0x5, 0xe2, 0x72, 0x2, 0x59f, 0x59d, 0x3, 0x2, 
    0x2, 0x2, 0x59f, 0x5a0, 0x3, 0x2, 0x2, 0x2, 0x5a0, 0x5a1, 0x3, 0x2, 
    0x2, 0x2, 0x5a1, 0x5a2, 0x7, 0x5, 0x2, 0x2, 0x5a2, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0x5a3, 0x5a4, 0x7, 0x67, 0x2, 0x2, 0x5a4, 0x5a5, 0x7, 0x4, 0x2, 
    0x2, 0x5a5, 0x5a6, 0x5, 0xe2, 0x72, 0x2, 0x5a6, 0x5a7, 0x7, 0xb, 0x2, 
    0x2, 0x5a7, 0x5a8, 0x5, 0xe2, 0x72, 0x2, 0x5a8, 0x5a9, 0x7, 0xb, 0x2, 
    0x2, 0x5a9, 0x5ac, 0x5, 0xe2, 0x72, 0x2, 0x5aa, 0x5ab, 0x7, 0xb, 0x2, 
    0x2, 0x5ab, 0x5ad, 0x5, 0xe2, 0x72, 0x2, 0x5ac, 0x5aa, 0x3, 0x2, 0x2, 
    0x2, 0x5ac, 0x5ad, 0x3, 0x2, 0x2, 0x2, 0x5ad, 0x5ae, 0x3, 0x2, 0x2, 
    0x2, 0x5ae, 0x5af, 0x7, 0x5, 0x2, 0x2, 0x5af, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0x5b0, 0x5b1, 0x7, 0x74, 0x2, 0x2, 0x5b1, 0x5b2, 0x5, 0x6e, 0x38, 0x2, 
    0x5b2, 0x101, 0x3, 0x2, 0x2, 0x2, 0x5b3, 0x5b4, 0x7, 0x61, 0x2, 0x2, 
    0x5b4, 0x5b5, 0x7, 0x74, 0x2, 0x2, 0x5b5, 0x5b6, 0x5, 0x6e, 0x38, 0x2, 
    0x5b6, 0x103, 0x3, 0x2, 0x2, 0x2, 0x5b7, 0x5b8, 0x7, 0x7f, 0x2, 0x2, 
    0x5b8, 0x5ba, 0x7, 0x4, 0x2, 0x2, 0x5b9, 0x5bb, 0x7, 0x73, 0x2, 0x2, 
    0x5ba, 0x5b9, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5bb, 0x3, 0x2, 0x2, 0x2, 
    0x5bb, 0x5be, 0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5bf, 0x7, 0x3, 0x2, 0x2, 
    0x5bd, 0x5bf, 0x5, 0xe2, 0x72, 0x2, 0x5be, 0x5bc, 0x3, 0x2, 0x2, 0x2, 
    0x5be, 0x5bd, 0x3, 0x2, 0x2, 0x2, 0x5bf, 0x5c0, 0x3, 0x2, 0x2, 0x2, 
    0x5c0, 0x5f8, 0x7, 0x5, 0x2, 0x2, 0x5c1, 0x5c2, 0x7, 0x76, 0x2, 0x2, 
    0x5c2, 0x5c4, 0x7, 0x4, 0x2, 0x2, 0x5c3, 0x5c5, 0x7, 0x73, 0x2, 0x2, 
    0x5c4, 0x5c3, 0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5c5, 0x3, 0x2, 0x2, 0x2, 
    0x5c5, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0x5c6, 0x5c7, 0x5, 0xe2, 0x72, 0x2, 
    0x5c7, 0x5c8, 0x7, 0x5, 0x2, 0x2, 0x5c8, 0x5f8, 0x3, 0x2, 0x2, 0x2, 
    0x5c9, 0x5ca, 0x7, 0x3b, 0x2, 0x2, 0x5ca, 0x5cc, 0x7, 0x4, 0x2, 0x2, 
    0x5cb, 0x5cd, 0x7, 0x73, 0x2, 0x2, 0x5cc, 0x5cb, 0x3, 0x2, 0x2, 0x2, 
    0x5cc, 0x5cd, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5ce, 0x3, 0x2, 0x2, 0x2, 
    0x5ce, 0x5cf, 0x5, 0xe2, 0x72, 0x2, 0x5cf, 0x5d0, 0x7, 0x5, 0x2, 0x2, 
    0x5d0, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5d1, 0x5d2, 0x7, 0x5e, 0x2, 0x2, 
    0x5d2, 0x5d4, 0x7, 0x4, 0x2, 0x2, 0x5d3, 0x5d5, 0x7, 0x73, 0x2, 0x2, 
    0x5d4, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d4, 0x5d5, 0x3, 0x2, 0x2, 0x2, 
    0x5d5, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5d6, 0x5d7, 0x5, 0xe2, 0x72, 0x2, 
    0x5d7, 0x5d8, 0x7, 0x5, 0x2, 0x2, 0x5d8, 0x5f8, 0x3, 0x2, 0x2, 0x2, 
    0x5d9, 0x5da, 0x7, 0x4b, 0x2, 0x2, 0x5da, 0x5dc, 0x7, 0x4, 0x2, 0x2, 
    0x5db, 0x5dd, 0x7, 0x73, 0x2, 0x2, 0x5dc, 0x5db, 0x3, 0x2, 0x2, 0x2, 
    0x5dc, 0x5dd, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 0x3, 0x2, 0x2, 0x2, 
    0x5de, 0x5df, 0x5, 0xe2, 0x72, 0x2, 0x5df, 0x5e0, 0x7, 0x5, 0x2, 0x2, 
    0x5e0, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5e2, 0x7, 0x4c, 0x2, 0x2, 
    0x5e2, 0x5e4, 0x7, 0x4, 0x2, 0x2, 0x5e3, 0x5e5, 0x7, 0x73, 0x2, 0x2, 
    0x5e4, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5e5, 0x3, 0x2, 0x2, 0x2, 
    0x5e5, 0x5e6, 0x3, 0x2, 0x2, 0x2, 0x5e6, 0x5e7, 0x5, 0xe2, 0x72, 0x2, 
    0x5e7, 0x5e8, 0x7, 0x5, 0x2, 0x2, 0x5e8, 0x5f8, 0x3, 0x2, 0x2, 0x2, 
    0x5e9, 0x5ea, 0x7, 0x8e, 0x2, 0x2, 0x5ea, 0x5ec, 0x7, 0x4, 0x2, 0x2, 
    0x5eb, 0x5ed, 0x7, 0x73, 0x2, 0x2, 0x5ec, 0x5eb, 0x3, 0x2, 0x2, 0x2, 
    0x5ec, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ed, 0x5ee, 0x3, 0x2, 0x2, 0x2, 
    0x5ee, 0x5f3, 0x5, 0xe2, 0x72, 0x2, 0x5ef, 0x5f0, 0x7, 0x8, 0x2, 0x2, 
    0x5f0, 0x5f1, 0x7, 0x6a, 0x2, 0x2, 0x5f1, 0x5f2, 0x7, 0x17, 0x2, 0x2, 
    0x5f2, 0x5f4, 0x5, 0x126, 0x94, 0x2, 0x5f3, 0x5ef, 0x3, 0x2, 0x2, 0x2, 
    0x5f3, 0x5f4, 0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5f5, 0x3, 0x2, 0x2, 0x2, 
    0x5f5, 0x5f6, 0x7, 0x5, 0x2, 0x2, 0x5f6, 0x5f8, 0x3, 0x2, 0x2, 0x2, 
    0x5f7, 0x5b7, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5c1, 0x3, 0x2, 0x2, 0x2, 
    0x5f7, 0x5c9, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5d1, 0x3, 0x2, 0x2, 0x2, 
    0x5f7, 0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x5e1, 0x3, 0x2, 0x2, 0x2, 
    0x5f7, 0x5e9, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x5f9, 0x5fb, 0x5, 0x128, 0x95, 0x2, 0x5fa, 0x5fc, 0x5, 0x94, 0x4b, 
    0x2, 0x5fb, 0x5fa, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5fc, 0x3, 0x2, 0x2, 
    0x2, 0x5fc, 0x107, 0x3, 0x2, 0x2, 0x2, 0x5fd, 0x601, 0x5, 0x126, 0x94, 
    0x2, 0x5fe, 0x602, 0x7, 0x95, 0x2, 0x2, 0x5ff, 0x600, 0x7, 0x1e, 0x2, 
    0x2, 0x600, 0x602, 0x5, 0x128, 0x95, 0x2, 0x601, 0x5fe, 0x3, 0x2, 0x2, 
    0x2, 0x601, 0x5ff, 0x3, 0x2, 0x2, 0x2, 0x601, 0x602, 0x3, 0x2, 0x2, 
    0x2, 0x602, 0x109, 0x3, 0x2, 0x2, 0x2, 0x603, 0x607, 0x5, 0x10c, 0x87, 
    0x2, 0x604, 0x607, 0x5, 0x10e, 0x88, 0x2, 0x605, 0x607, 0x5, 0x110, 
    0x89, 0x2, 0x606, 0x603, 0x3, 0x2, 0x2, 0x2, 0x606, 0x604, 0x3, 0x2, 
    0x2, 0x2, 0x606, 0x605, 0x3, 0x2, 0x2, 0x2, 0x607, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x608, 0x60c, 0x5, 0x112, 0x8a, 0x2, 0x609, 0x60c, 0x5, 0x114, 
    0x8b, 0x2, 0x60a, 0x60c, 0x5, 0x116, 0x8c, 0x2, 0x60b, 0x608, 0x3, 0x2, 
    0x2, 0x2, 0x60b, 0x609, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x60a, 0x3, 0x2, 
    0x2, 0x2, 0x60c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x60d, 0x611, 0x5, 0x118, 
    0x8d, 0x2, 0x60e, 0x611, 0x5, 0x11a, 0x8e, 0x2, 0x60f, 0x611, 0x5, 0x11c, 
    0x8f, 0x2, 0x610, 0x60d, 0x3, 0x2, 0x2, 0x2, 0x610, 0x60e, 0x3, 0x2, 
    0x2, 0x2, 0x610, 0x60f, 0x3, 0x2, 0x2, 0x2, 0x611, 0x10f, 0x3, 0x2, 
    0x2, 0x2, 0x612, 0x616, 0x5, 0x11e, 0x90, 0x2, 0x613, 0x616, 0x5, 0x120, 
    0x91, 0x2, 0x614, 0x616, 0x5, 0x122, 0x92, 0x2, 0x615, 0x612, 0x3, 0x2, 
    0x2, 0x2, 0x615, 0x613, 0x3, 0x2, 0x2, 0x2, 0x615, 0x614, 0x3, 0x2, 
    0x2, 0x2, 0x616, 0x111, 0x3, 0x2, 0x2, 0x2, 0x617, 0x618, 0x7, 0x96, 
    0x2, 0x2, 0x618, 0x113, 0x3, 0x2, 0x2, 0x2, 0x619, 0x61a, 0x7, 0x97, 
    0x2, 0x2, 0x61a, 0x115, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x61c, 0x7, 0x98, 
    0x2, 0x2, 0x61c, 0x117, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x61e, 0x7, 0x99, 
    0x2, 0x2, 0x61e, 0x119, 0x3, 0x2, 0x2, 0x2, 0x61f, 0x620, 0x7, 0x9a, 
    0x2, 0x2, 0x620, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x621, 0x622, 0x7, 0x9b, 
    0x2, 0x2, 0x622, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x623, 0x624, 0x7, 0x9c, 
    0x2, 0x2, 0x624, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x625, 0x626, 0x7, 0x9d, 
    0x2, 0x2, 0x626, 0x121, 0x3, 0x2, 0x2, 0x2, 0x627, 0x628, 0x7, 0x9e, 
    0x2, 0x2, 0x628, 0x123, 0x3, 0x2, 0x2, 0x2, 0x629, 0x62a, 0x9, 0x6, 
    0x2, 0x2, 0x62a, 0x125, 0x3, 0x2, 0x2, 0x2, 0x62b, 0x62c, 0x9, 0x7, 
    0x2, 0x2, 0x62c, 0x127, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x630, 0x7, 0x8f, 
    0x2, 0x2, 0x62e, 0x630, 0x5, 0x12a, 0x96, 0x2, 0x62f, 0x62d, 0x3, 0x2, 
    0x2, 0x2, 0x62f, 0x62e, 0x3, 0x2, 0x2, 0x2, 0x630, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x631, 0x632, 0x9, 0x8, 0x2, 0x2, 0x632, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x633, 0x634, 0x9, 0x9, 0x2, 0x2, 0x634, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x132, 0x13b, 0x143, 0x145, 0x153, 0x160, 0x164, 0x166, 
    0x169, 0x176, 0x17f, 0x185, 0x189, 0x18f, 0x192, 0x197, 0x19b, 0x1a3, 
    0x1ac, 0x1b6, 0x1bb, 0x1be, 0x1c1, 0x1c4, 0x1cb, 0x1d3, 0x1d8, 0x1de, 
    0x1e7, 0x1ed, 0x1ef, 0x1f3, 0x1f7, 0x1f9, 0x203, 0x209, 0x20b, 0x218, 
    0x21c, 0x221, 0x225, 0x22b, 0x231, 0x237, 0x23f, 0x247, 0x258, 0x25c, 
    0x25f, 0x264, 0x274, 0x278, 0x27b, 0x284, 0x28f, 0x293, 0x296, 0x29a, 
    0x2a1, 0x2a8, 0x2aa, 0x2af, 0x2b4, 0x2b9, 0x2be, 0x2c1, 0x2c6, 0x2c8, 
    0x2d2, 0x2dd, 0x2ee, 0x2f5, 0x2ff, 0x303, 0x30a, 0x30f, 0x311, 0x31b, 
    0x325, 0x32e, 0x336, 0x33d, 0x342, 0x34b, 0x350, 0x354, 0x35b, 0x35d, 
    0x365, 0x368, 0x370, 0x374, 0x379, 0x380, 0x38b, 0x38e, 0x396, 0x39a, 
    0x39f, 0x3aa, 0x3b6, 0x3be, 0x3c3, 0x3c8, 0x3d4, 0x3dd, 0x3e0, 0x3e3, 
    0x3ea, 0x3ec, 0x3f0, 0x3f8, 0x402, 0x40a, 0x410, 0x414, 0x418, 0x41c, 
    0x426, 0x42f, 0x437, 0x44e, 0x459, 0x45f, 0x461, 0x464, 0x466, 0x46e, 
    0x470, 0x47a, 0x483, 0x4b5, 0x58b, 0x594, 0x59f, 0x5ac, 0x5ba, 0x5be, 
    0x5c4, 0x5cc, 0x5d4, 0x5dc, 0x5e4, 0x5ec, 0x5f3, 0x5f7, 0x5fb, 0x601, 
    0x606, 0x60b, 0x610, 0x615, 0x62f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SPARQLParser::Initializer SPARQLParser::_init;
