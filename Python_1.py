def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    open_brace = False
    current_group = ""

    for char in paren_string:
        if char == "(":
            open_brace = True
        elif char == ")":
            open_brace = False
            result.append(current_group)
            current_group = ""
        elif open_brace:
            current_group += char

    return result