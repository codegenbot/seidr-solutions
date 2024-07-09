def match_parens(lst):
    stack = []
    for char in lst:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if stack and stack[-1] == "(":
                stack.pop()
            else:
                return "No"
    return "Yes" if not stack else "No"