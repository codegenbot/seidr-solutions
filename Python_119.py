```
def match_parens(lst):
    for s in lst:
        if len(s) % 2 != 0: 
            continue
        open_count = s.count('(')
        close_count = s.count(')')
        if open_count != close_count:
            return "No"
    return "Yes"