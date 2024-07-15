```
def match_parens(lst):
    stack = []
    for s in lst:
        if not s:  
            return 'Yes'
        parens_count = sum(1 for c in s if c in ['(', ')'])
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