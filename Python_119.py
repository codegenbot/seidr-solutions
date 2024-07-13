def match_parens(lst):
    result = []
    for s in lst:
        stack = []
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if not stack:
                    result.append("No")
                    break
                stack.pop()
        if stack:
            result.append("No")
        else:
            result.append("Yes")
    return result