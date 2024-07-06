def separate_paren_groups(paren_string):
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append([])
        elif char == ")":
            if len(stack) > 0:
                stack[-1].append(char)
            else:
                result.extend(["".join(s) for s in stack])
                stack = []
        else:
            if len(stack) > 0:
                stack[-1].append(char)
    if len(stack) > 0:
        result.extend(["".join(s) for s in stack])
    return result