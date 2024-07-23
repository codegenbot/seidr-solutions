```
def match_parens(lst):
    for s in lst:
        stack = []
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if not stack: 
                    return 'No'
                else:
                    stack.pop()
        if stack: 
            return 'No'
    return 'Yes'