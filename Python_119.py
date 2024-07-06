def match_parens(lst):
    stack = []
    for c in lst:
        if c == "(":
            stack.append(c)
        else:
            if len(stack) == 0:
                return "No"
            stack.pop()
    return "Yes" if len(stack) == 0 else "No"