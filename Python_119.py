```
def match_parens(lst):
    open_parentheses = 0
    close_parentheses = 0
    for s in lst:
        if s[0] == '(':
            open_parentheses += 1
        elif s[0] == ')':
            close_parentheses += 1
    if open_parentheses == close_parentheses:
        return 'Yes'
    else:
        return 'No'