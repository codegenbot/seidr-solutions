def match_parens(lst):
    a, b = lst
    stack = []
    for char in (a+b):
        if char == '(':
            stack.append(char)
        elif char == ')':
            if len(stack) > 0 and stack.pop() == '(':
                continue
            else:
                return 'No'
    return 'Yes' if len(stack) == 0 else 'No'