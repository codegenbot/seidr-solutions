```
def match_parens(lst):
    return 'Yes' if sum(1 for s in lst if s.count('(') != s.count(')')) == 0 and all(s.count('(') <= s.count(')') for s in lst) else 'No'