```python
def match_parens(lst):
    """
    This function checks if all parentheses in a list of strings are matched.
    
    Args:
        lst (list): A list of strings that may contain parentheses.
    
    Returns:
        str: 'Yes' if all parentheses are matched, 'No' otherwise.
    """
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) == 0:
                    return 'No'
                else:
                    stack.pop()
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'