```
def match_parens(lst):
    stack = []
    for s in lst:
        if s.startswith('('):
            stack.append('(')
        elif s.startswith(')'):
            if len(stack) == 0:
                return 'No'
            stack.pop()
        else:
            return 'No'
    return 'Yes' if len(stack) == 0 else 'No'