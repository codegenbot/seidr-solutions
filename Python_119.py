def match_parens(lst):
    for s in lst:
        if not isinstance(s, str):
            return 'No'
        parens_count = sum(1 for c in s if c in ['(', ')'])
        stack = []
        if parens_count == 0:
            continue
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if len(stack) == 0:
                    return 'No'
                stack.pop()
        if len(stack) > 0:
            return 'No'
    return 'Yes'