```
def match_parens(lst):
    open_count = 0
    close_count = 0
    
    for s in lst:
        for c in s:
            if c == '(':
                open_count += 1
            elif c == ')':
                close_count += 1
                
            if close_count > open_count:
                return 'No'
                
    if open_count == close_count:
        return 'Yes'
    else:
        return 'No'