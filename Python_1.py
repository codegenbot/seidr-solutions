def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    current_group = ""
    result = []

    for char in paren_string:
        if char == "(":
            stack.append("(")
            current_group += char
        elif char == ")" and stack:
            stack.pop()
            current_group += char
            if not stack:
                result.append(current_group)
                current_group = ""

    return result