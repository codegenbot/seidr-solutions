def match_parens(lst):
    stack = []
    for c in lst:
        if c == '(':
            stack.append(c)
        elif c == ')':
            if len(stack) == 0 or stack[-1] != '(':
                continue
            stack.pop()

    return 'Yes' if len(stack) == 0 else 'No'