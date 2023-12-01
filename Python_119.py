def match_parens(lst):
    stack = []
    for s in lst:
        for char in s:
            if char == '(':
                stack.append(char)
            elif char == ')':
                if len(stack) == 0:
                    return 'No'
                stack.pop()
                if len(stack) == 0:
                    return 'No'
    if len(stack) != 0:
        return 'No'
    return 'Yes'