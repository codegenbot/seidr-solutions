```
def match_parens(lst):
    """Return 'Yes' if parentheses in the input list are properly matched, else 'No'."""
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if not stack:  
                    return 'No'
                else:
                    stack.pop()
    return 'Yes' if not stack else 'No'