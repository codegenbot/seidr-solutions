def match_parens(lst):
    stack = []
    for s in lst:
        if s == '(':
            stack.append(s)
        elif s == ')':
            if len(stack) == 0:
                return 'No'
            stack.pop()
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'