```
def match_parens(lst):
    stack = []
    for s in lst:
        for char in s:
            if char == '(':
                stack.append(char)
            elif char == ')':
                if len(stack) > 0 and stack.pop() == '(':
                    continue
                else:
                    return False
    if len(stack) == 0:
        return True
    else:
        return False