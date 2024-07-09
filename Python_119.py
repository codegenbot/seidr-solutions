def match_parens(s):
    stack = []
    for char in s:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if not stack or stack[-1] != "(":
                return "No"
            stack.pop()
        else:
            return "No"
    return "Yes" if not stack else "No"