def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    group = ""

    for char in paren_string:
        if char == "(":
            stack.append(char)
            if len(stack) == 1:
                group += char
        elif char == ")":
            stack.pop()
            if not stack:
                group += char
                result.append(group)
                group = ""
        else:
            if group:
                group += char

    return result