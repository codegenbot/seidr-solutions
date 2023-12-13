def match_parens(lst):
    stack = []
    for char in lst[0] + lst[1]:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack:
                return 'No'
            stack.pop()
    return 'Yes' if not stack else 'No'