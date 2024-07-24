```
def match_parens(lst):
    if len(lst) != 2:
        return 'No'
    for s in lst:
        if s[0] == ')':
            return 'No'
        if s[-1] == '(':
            return 'No'
    s1 = lst[0]
    s2 = lst[1]
    stack = []
    for c in s1 + s2:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if not stack or stack.pop() != '(':
                return 'No'
    if stack:
        return 'No'
    return 'Yes'