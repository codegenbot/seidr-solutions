```
def match_parens(lst):
    result = 'Yes'
    for s in lst:
        stack = []
        for char in s:
            if char == '(':
                stack.append(char)
            elif char == ')':
                if len(stack) == 0:
                    result = 'No'
                    return result
                stack.pop()
    return 'No' if len(stack) > 0 else result