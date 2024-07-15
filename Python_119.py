```
def match_parens(lst):
    stack = []
    for s in lst:
        parens_count = sum(1 for c in s if c in ['(', ')'])
        if parens_count == 0:
            return 'Yes'
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) == 0:
                    return 'No'
                stack.pop()
    if len(stack) > 0:
        return 'No'
    else:
        return 'Yes'