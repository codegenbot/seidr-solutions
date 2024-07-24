``` 
def match_parens(lst):
    s1 = lst[0]
    s2 = lst[1]
    stack = []
    for c in s1 + s2:
        if c == '(':
            stack.append(')')
        elif c == ')':
            if not stack or str(stack.pop()) != ')':
                return 'No'
    if stack:
        return 'No'
    return 'Yes'