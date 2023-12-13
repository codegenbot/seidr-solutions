def match_parens(lst):
    stack = []
    for char in lst[0] + lst[1]:
        if char == '(':
            stack.append('(')
        elif char == ')':
            if not stack or stack[-1] != '(':
                return 'No'
            stack.pop()
    if not stack:
        return 'Yes'
    else:
        return 'No'