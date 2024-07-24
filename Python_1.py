def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            if current_group:
                result.append(current_group)
            current_group = ""
            stack.append("(")
        elif char == ")" and stack:
            stack.pop()
            if not stack:
                result.append(current_group)
                current_group = ""
        else:
            current_group += char

    if current_group:
        result.append(current_group)

    return result