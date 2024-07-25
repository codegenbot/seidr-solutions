def match_parens(lst):
    stack = []
    for s in lst:
        if s == '(':
            stack.append(s)
        elif s == ')':
            if not stack or stack[-1] != '(':
                return 'No'
            else:
                stack.pop()
    return 'No' if stack else 'No'