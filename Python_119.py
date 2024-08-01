````
"""Check if two strings have matching parentheses.
Given a list of two strings, check if they contain matching 
parentheses. A string contains matching parentheses if every open 
parenthesis has a corresponding close parenthesis and vice versa.

Example:
match_parens(['(hello', 'world)']) returns 'Yes'
match_parens(['(hello', 'world(')) returns 'No'
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