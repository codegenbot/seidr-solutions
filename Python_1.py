def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            if stack:
                current_group += char
            stack.append(char)
        elif char == ")":
            stack.pop()
            if not stack:
                result.append(current_group + char)
                current_group = ""
            else:
                current_group += char

    return result