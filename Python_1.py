def separate_paren_groups(paren_string):
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if not stack:
                return None
            result.append(stack.pop())
    if stack:
        return None
    return result