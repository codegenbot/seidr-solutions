def match_parens(lst):
    stack = []

    for char in lst:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if not stack:
                return "No"
            stack.pop()

    return "Yes" if not stack else "No"