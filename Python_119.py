def match_parens(s):
    stack = []
    for c in s:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if len(stack) == 0 or stack.pop() != '(':
                return 'No'
    return 'Yes' if len(stack) == 0 else 'No'