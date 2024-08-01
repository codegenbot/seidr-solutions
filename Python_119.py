````
"""Given two strings s1 and s2, check if they match in terms of parentheses.
A string is considered to match if every open parenthesis has a corresponding close parenthesis.
If there are unmatched open parentheses at the end, return 'No'.
Else, return 'Yes'."""
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
```