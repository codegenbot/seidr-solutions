```
def match_parens(lst):
    for s in lst:
        if len(s) % 2 != 0: 
            return 'No'
        stack = []
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) == 0 or stack.pop() != '(':
                    return 'No'
        if len(stack) > 0:
            return 'No'
    return 'Yes'