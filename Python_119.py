```
def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c.lower() == '(':
                stack.append(c)
            elif c.lower() == ')':
                if not stack:
                    return 'No'
                stack.pop()
    return 'Yes' if not stack else 'No'