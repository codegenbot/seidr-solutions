```
def match_parens(lst):
    if any(c not in '()()' for c in lst[0] + lst[1]):
        return "No"
    s1 = lst[0]
    s2 = lst[1]
    stack = []
    for c in s1 + s2:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if not stack:
                return 'No'
            stack.pop()
    if stack:
        return 'No'
    return 'Yes'