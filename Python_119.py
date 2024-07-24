```
"""
Check if two strings of parentheses match.
The function takes a list of two strings as input. It checks if the first string contains an opening parenthesis for every closing parenthesis in the second string, and vice versa.

Return 'Yes' if the parentheses match, 'No' otherwise.
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