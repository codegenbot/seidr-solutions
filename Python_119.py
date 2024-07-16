def match_parens(lst):
    if lst[0] == ')':
        return 'No'
    stack = []
    for s in lst[1:]:
        if s == '(':
            stack.append(s)
        elif s == ')':
            if not stack or stack[-1] != '(':
                return 'No'
            stack.pop()
    return 'Yes' if not stack else 'No'