def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) > 0 and stack.pop() == '(':
                    pass
                else:
                    return 
    return  if len(stack) == 0 else