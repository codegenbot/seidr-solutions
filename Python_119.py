def match_parens(lst):
    stack = []
    for c in lst:
        if c == '(':
            stack.append(c)
        elif c == ')' and (not stack or stack[-1] != '('):
            return 'No'
        else:
            stack.pop()
    if stack:
        return 'No'
    else:
        return 'Yes'