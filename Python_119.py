```
def match_parens(lst):
    open_count = sum(s.count('(') for s in lst)
    close_count = sum(s.count(')') for s in lst)
    
    return 'Yes' if open_count == close_count else 'No'