def match_parens(lst):
    stack = []
    for c in lst:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if not stack or stack[-1] != '(':
                return 'No'
            stack.pop()

    return 'No' if stack else 'Yes'