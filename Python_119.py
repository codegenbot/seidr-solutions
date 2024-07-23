```
def match_parens(lst):
    return "Yes" if sum(s.count("(") for s in lst) == sum(s.count(")") for s in lst) else "No"