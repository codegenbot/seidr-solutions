def match_parens(lst):
    stack = []
    for char in lst:
        if char == "(":
            stack.append(char)
        else:
            if not stack or stack[-1] != "(":
                return "No"
            stack.pop()
    if stack:
        return "No"
    return "Yes"