```
"""
Check if a pair of strings of parentheses is balanced.
The function match_parens takes as input two strings: s1 and s2.
Each string can contain any characters (including parentheses).
Return 'Yes' if the strings have matching parentheses, otherwise return 'No'.
"""

def match_parens(lst):
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