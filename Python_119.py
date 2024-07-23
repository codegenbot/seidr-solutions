def match_parens(lst):
    stack = []
    for s in lst:
        if s == '(': 
            stack.append(s)
        elif s == ')':
            if not stack: 
                return
            else:
                stack.pop()
    return not stack