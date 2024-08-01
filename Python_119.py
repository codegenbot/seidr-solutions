````
"""Check if two strings of parentheses match.
Given a list of two strings, where each string contains 
only '(' and ')' characters, check if they match (i.e., 
each open parenthesis has a corresponding close parenthesis).
If the strings match, return 'Yes', otherwise return 'No'.

Example:
match_parens(['(())']) should return 'Yes'
match_parens(['(()']) should return 'No'

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