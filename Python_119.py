def match_parens(lst):
    return 'Yes' if sum(1 for s in lst if s.count('(') != s.count(')')) else 'No'