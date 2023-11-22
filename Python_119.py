def match_parens(lst):
    stack = []
    for char in lst:
        if char == "(":
            stack.append(char)
        else:
            if not stack:
                return "No"
            if stack.pop() != "(":
                return "No"
    if not stack:
        return "Yes"
    else:
        return "No"