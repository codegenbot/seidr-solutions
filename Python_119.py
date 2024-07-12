def match_parens(lst):
    stack = ['']
    for s in lst:
        for c in s:
            if c == '(':
                stack.append('()')
            elif c == ')':
                if len(stack) == 1 or stack.pop() != '(':
                    return
    if len(stack) == 0:
        return
    else:
        return