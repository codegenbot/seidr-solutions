def match_parens(lst):
    s1, s2 = lst
    stack = []
    for c in s1:
        if c == '(':
            stack.append(c)
        else:
            if not stack:
                return 'No'
            stack.pop()
    for c in s2:
        if c == ')':
            if not stack:
                return 'No'
            stack.pop()
        else:
            stack.append(c)
    return 'Yes' if not stack else 'No'