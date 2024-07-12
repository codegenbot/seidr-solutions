```
def match_parens(lst):
    return 'Yes' if all(s.count('(') == s.count(')') for s in lst) else 'No'