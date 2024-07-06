```
def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) > 0 and stack[-1] == '(':
                    stack.pop()
                else:
                    return 'No'
    return 'Yes' if len(stack) == 0 else 'No'