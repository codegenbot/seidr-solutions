def match_parens(lst):
    stack = []
    matching_parens = {'(': ')', '[': ']', '{': '}'}

    for c in lst:
        if c in matching_parens:
            stack.append(c)
        elif c in matching_parens.values():
            if len(stack) == 0 or matching_parens[stack[-1]] != c:
                return 'No'
            stack.pop()

    return 'Yes' if len(stack) == 0 else 'No'