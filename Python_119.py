def match_parens(lst):
    stack = []
    for paren in lst[0] + lst[1]:
        if paren == '(':
            stack.append(paren)
        elif paren == ')':
            if len(stack) == 0:
                return 'No'
            stack.pop()
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'