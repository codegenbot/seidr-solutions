def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    open_count = 0
    current_group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            open_count += 1
            current_group += char
        elif char == ")":
            pass  # need to handle this case properly

    return result