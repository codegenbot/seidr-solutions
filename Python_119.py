```
def match_parens(lst):
    s1, s2 = lst
    stack = []
    for c in s1 + s2:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if len(stack) > 0 and stack.pop() == '(':
                continue
            else:
                return 'No'
    if len(stack) > 0:
        return 'No'
    return 'Yes'