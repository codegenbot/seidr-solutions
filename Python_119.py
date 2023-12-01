def match_parens(lst):
    stack = []
    for s in lst:
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if not stack:
                    return "No"
                stack.pop()
            else:
                return "No"
    if stack:
        return "No"
    return "Yes"