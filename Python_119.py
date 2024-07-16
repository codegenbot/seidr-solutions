def match_parens(lst):
    stack = []
    for s in lst:
        if s == '(':
            stack.append(s)
        elif s == ')':
            if not stack or not stack[-1] == '(':
                return 'No'
            stack.pop()
    if not stack:
        return 'Yes'
    return 'No'