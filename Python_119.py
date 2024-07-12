```
def match_parens(lst):
"""Docstring here"""
    s1 = lst[0]
    s2 = lst[1]
    stack = []
    
    for char in s1 + s2:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if not stack:
                return 'No'
            stack.pop()
    
    if stack:
        return 'No'
    else:
        return 'Yes'