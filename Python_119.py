def match_parens(lst):
    stack = []
    for char in lst[0]:
        if char == "(":
            stack.append(char)
        else:
            if len(stack) == 0:
                return "No"
            stack.pop()
    if len(stack) > 0:
        for char in lst[1]:
            if char == ")":
                stack.append(char)
            else:
                if len(stack) == 0:
                    return "No"
                stack.pop()
    if len(stack) == 0:
        return "Yes"
    else:
        return "No"