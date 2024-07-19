def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    open_count, close_count = 0, 0
    current_group = ""

    for char in paren_string:
        if char == "(":
            open_count += 1
            if open_count > close_count:
                current_group += "("
        elif char == ")":
            close_count += 1
            if open_count > close_count:
                current_group += ")"
            if open_count == close_count:
                result.append(current_group)
                current_group = ""

    return result