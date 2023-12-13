def match_parens(lst):
    stack = []
    for s in lst:
        for ch in s:
            if ch == '(':
                stack.append(ch)
            elif ch == ')':
                if len(stack) == 0:
                    return 'No'
                stack.pop()
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'