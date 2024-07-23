def match_parens(lst):
    stack = []
    for s in lst:
        for c in str(s):  
            if c == '(': 
                stack.append(c)
            elif c == ')':
                if not stack:  
                    return 'No'
                else:
                    stack.pop()
    return 'Yes' if not stack else 'No'