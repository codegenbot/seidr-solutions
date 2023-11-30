def match_parens(lst):
    stack = []
    for s in lst:
        if s == '(':
            stack.append('(')
        else:
            if not stack or stack[-1] != '(':
                return 'No'
            stack.pop()
    if stack:
        return 'No'
    return 'Yes'