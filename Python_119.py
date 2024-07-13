```Python
def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                while len(stack) > 0 and stack[-1] != '(':
                    stack.pop()
                if len(stack) == 0 or stack.pop() != '(':
                    return 'No'
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'