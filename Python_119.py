````
"""Given two strings s1 and s2, write a function match_parens(lst) that checks if the parentheses in these strings are properly matched.
The function takes as input a list lst containing two strings, and returns 'Yes' if the parentheses are matched correctly and 'No' otherwise.
For example, match_parens(['(hello)', '(world)']) should return 'Yes', while match_parens(['(hello', ')world)']) should return 'No'.
"""

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