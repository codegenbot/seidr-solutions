def match_parens(lst):
    stack = []
    for s in lst:
        if s == "(":
            stack.append(s)
        elif s == ")":
            if not stack:
                return "No"
            stack.pop()

    return "No" if stack else "Yes"