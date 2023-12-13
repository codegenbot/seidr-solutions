def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c in '()':
                if c == '(':
                    stack.append(c)
                elif len(stack) == 0 or stack[-1] != '(':
                    return 'No'
                else:
                    stack.pop()
    
    return 'Yes' if len(stack) == 0 else 'No'