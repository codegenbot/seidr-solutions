def match_parens(lst):
    s1, s2 = lst
    stack = []
    for char in s1 + s2:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack and stack.pop() == '(':
                pass
            else:
                return 'No'
    return 'Yes' if not stack else 'No'