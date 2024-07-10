def match_parens(lst):
    stack = []
    for s in lst:
        for char in s:
            if char == "(":
                stack.append("(")
            elif char == ")":
                if not stack:
                    return "No"
                stack.pop()
    return "Yes" if not stack else "No"