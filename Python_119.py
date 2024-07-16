def match_parens(lst):
    if not lst or lst[0] == ")":
        return "No"
    stack = []
    for s in lst:
        if s == "(":
            stack.append(s)
        elif s == ")":
            if not stack or stack[-1] != "(":
                return "No"
            stack.pop()
    return "Yes" if not stack else "No"