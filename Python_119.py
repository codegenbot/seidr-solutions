def match_parens(lst):
    stack = []
    for s in lst:
        if not s:  
            continue
        parens_count = sum(1 for c in s if c in ['(', ')'])
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                while len(stack) > 0 and stack.pop() != '(':
                    pass
                if len(stack) == 0:
                    return 
    if len(stack) > 0:
        return 
    else:
        return