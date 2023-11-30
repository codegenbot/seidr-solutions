def match_parens(lst):
    stack = []
    for s in lst:
        if s == '(':
            stack.append('(')
        else:
            if not stack:
                return 'Yes'
            stack.pop()
    if stack:
        return 'No'
    return 'Yes'