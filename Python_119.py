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
                    return 'No'
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'