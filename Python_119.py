```
def match_parens(lst):
    stack = []
    for s in lst:
        for char in s:
            if char == '(':
                stack.append(char)
            elif char == ')':
                if len(stack) == 0:
                    return False
                stack.pop()
    return len(stack) == 0