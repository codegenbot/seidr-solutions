def match_parens(lst):
    stack = []
    for s in lst:
        opened = False
        for c in s:
            if c == '(':
                stack.append(c)
                opened = True
            elif c == ')':
                if not stack:  
                    return 'No'
                else:
                    stack.pop()
                    if opened:
                        opened = False
    return 'Yes' if not stack else 'No'