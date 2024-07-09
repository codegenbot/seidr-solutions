```
def match_parens(lst):
    open_count = 0
    close_count = 0
    
    for s in lst:
        if s[0] == '(':
            open_count += 1
        elif s[0] == ')':
            close_count += 1
            
        if len(s) != 2 or (s[0] != '(' and s[0] != ')'):
            return 'No'
            
    if open_count == close_count:
        return 'Yes'
    else:
        return 'No'