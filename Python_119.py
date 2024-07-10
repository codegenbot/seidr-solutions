def match_parens(lst):
    return 'Yes' if abs(lst.count('(') - lst.count(')')) <= 1 else 'No'