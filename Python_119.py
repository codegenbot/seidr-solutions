```
def match_parens(lst):
    s1, s2 = lst
    stack = []
    for char in s1 + s2:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if len(stack) == 0:
                return 'No'
            stack.pop()
    return 'Yes' if len(stack) == 0 else 'No'