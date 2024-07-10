```
def match_parens(lst):
    """This function checks if a given list of strings has balanced parentheses."""
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) == 0:
                    return 'No'
                stack.pop()
    return 'Yes' if len(stack) == 0 else 'No'