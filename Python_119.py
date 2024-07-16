def match_parens(lst):
    if not lst or lst[0] == ')' or lst[-1] == '(':
        return 'No'
    stack = []
    for s in lst[1:]:
        if s == '(':
            stack.append(s)
        elif s == ')':
            if not stack or stack[-1] != '(':
                return 'No'
            stack.pop()
    if not stack:
        return 'Yes'
    return 'No'