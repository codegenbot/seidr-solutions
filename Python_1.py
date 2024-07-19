def separate_paren_groups(paren_string: str) -> List[str]:
    no_spaces = paren_string.replace(" ", "")
    result = []
    current_group = ""

    for char in no_spaces:
        if char == "(":
            current_group += char
        elif char == ")":
            current_group += char
            result.append(current_group)
            current_group = ""

    return result