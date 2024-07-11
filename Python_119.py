def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if stack:
                    stack.pop()
                else:
                    return "No"
    return "Yes" if not stack else "No"