````
"""Given two strings s1 and s2, determine if they match in terms of parentheses.
A string matches if every open parenthesis has a corresponding close parenthesis.
If there are unmatched open parentheses, the function should return 'No'.
Otherwise, it returns 'Yes'."""
def match_parens(lst):
    s1, s2 = lst
    stack = []
    for char in s1 + s2:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack:
                stack.pop()
            else:
                return 'No'
    return 'Yes' if not stack else 'No'