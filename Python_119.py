def match_parens(lst):
    stack = []
    for char in lst:
        if char == "(":
            stack.append(char)
        else:
            if stack and stack[-1] == "(":
                stack.pop()
            else:
                stack.append(char)
    if not stack:
        return "Yes"
    return "No"