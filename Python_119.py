def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')' and (not stack or stack[-1] != '('):
                return 'No'
            else:
                stack.pop()
    return 'Yes' if not stack else 'No'