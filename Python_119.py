def match_parens(lst):
    stack = []
    for s in lst:
        if s == '(':
            stack.append(s)
        elif s == ')':
            if not stack or stack.pop() != '(':
                return 'No'
    return 'No' if stack else 'Yes'