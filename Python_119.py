```
def match_parens(lst):
    s1 = lst[0]
    s2 = lst[1]

    if len(s1) != len(s2): 
        return 'No'

    if s1[0] == ')' or s2[0] == '(':
        return 'No'

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