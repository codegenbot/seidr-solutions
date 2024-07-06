def match_parens(lst):
    """Check if all parentheses in the input list are balanced"""
    stack = []
    for s in lst:
        for c in s:
            if c == "(":
                stack.append(c)
            elif c == ")":
                if not stack:
                    return "No"
                stack.pop()
    return "Yes" if not stack else "No"