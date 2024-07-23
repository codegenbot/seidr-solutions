def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if isinstance(c, str) and c == '(':
                stack.append(c)
            elif isinstance(c, str) and c == ')':
                if not stack:  
                    return 'No'
                else:
                    stack.pop()
    return 'Yes' if not stack else 'No'