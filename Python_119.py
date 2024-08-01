````
"""Match Parentheses
Given a list of two strings, s1 and s2, determine if the parentheses in these strings match.
A string can contain both '(' and ')' characters.

Example:
    >>> match_parens(['(a+b)', 'c+d)'])
    No

    >>> match_parens(['(a+b)', '(c+d)'])
    Yes
"""

def match_parens(lst):
    s1, s2 = lst
    stack = []
    for char in s1 + s2:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack and stack.pop() == '(':
                continue
            else:
                return 'No'
    return 'Yes' if not stack else 'No'