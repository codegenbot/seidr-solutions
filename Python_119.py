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
    if not stack:
        return "Yes"
    else:
        return "No"