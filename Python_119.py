```
def match_parens(lst):
    stack = []
    for s in lst:
        if isinstance(s, str):  
            for c in s:
                if c == '(':
                    stack.append(c)
                elif c == ')':
                    if len(stack) == 0:
                        return 'No'
                    else:
                        stack.pop()
        elif isinstance(s, str):
            if s == '(':
                stack.append(s)
            elif s == ')':
                if len(stack) == 0:
                    return 'No'
                else:
                    stack.pop()
    if len(stack) == 0:
        return 'Yes'
    else:
        return 'No'