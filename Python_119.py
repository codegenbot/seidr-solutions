def match_parens(s):
    stack = []
    for char in s:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if len(stack) == 0:
                return 'No'
            else:
                stack.pop()
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'