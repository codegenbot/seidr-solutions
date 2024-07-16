def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    in_group = False

    for char in paren_string:
        if char == "(":
            in_group = True
        elif char == ")":
            in_group = False
            result.append(current_group + ")")
            current_group = ""
        elif in_group:
            current_group += char

    return result