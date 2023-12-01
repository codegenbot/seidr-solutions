def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == ')':
                if not stack or stack[-1] != '(':
                    return 'No'
                stack.pop()
            else:
                stack.append(c)
    if stack:
        return 'No'
    return 'Yes'