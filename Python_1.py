
def separate_paren_groups(paren_string: str) -> list:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append([])
        elif char == ")":
            if len(stack) > 0:
                stack[-1].append(char)
            else:
                result.append(char)
        else:
            if len(stack) > 0:
                stack[-1].append(char)
    for group in stack:
        result.append("".join(group))
    return result