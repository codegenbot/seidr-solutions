```
def match_parens(lst):
    for s in lst:
        stack = []
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) == 0:
                    return 'No'
                else:
                    stack.pop()
        if len(stack) > 0:
            return 'No'
    return 'Yes'

print(match_parens(['((()))', '(())', '(()))']))