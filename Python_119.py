```
def match_parens(lst):
    open_count = 0
    close_count = 0
    
    for s in lst:
        if s == '(':
            open_count += 1
        elif s == ')':
            close_count += 1
            
        if len(s) != 1 or (open_count > 0 and s == ')') or (close_count > 0 and s == '('):
            return 'No'
            
    if open_count == close_count:
        return 'Yes'
    else:
        return 'No'