def match_parens(lst):
    stack = []
    for s in lst:
        if len(s) > 0 and (s[0] == '(' or s[-1] == ')'):
            if s[0] == '(':
                stack.append(s[0])
            elif s[-1] == ')':
                if not stack:  
                    return 'No'
                else:
                    stack.pop()
    return 'Yes' if not stack else 'No'