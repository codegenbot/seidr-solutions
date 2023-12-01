def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')' and len(stack) > 0:
                stack.pop()
            else:
                return 'No'
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'