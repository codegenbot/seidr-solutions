```
def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if not stack or stack.pop() != '(':
                    return 'No'
    return 'Yes' if not stack else 'No'