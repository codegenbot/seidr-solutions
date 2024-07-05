def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result, stack, group = [], [], ""

    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            stack.pop()
        group += char

        if not stack:
            result.append(group)
            group = ""

    return result