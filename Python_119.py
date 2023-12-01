def match_parens(lst):
    stack = []
    for i in lst:
        if i == '(':
            stack.append(i)
        elif i == ')':
            if len(stack) == 0 or stack.pop() != '(':
                return 'No'
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'