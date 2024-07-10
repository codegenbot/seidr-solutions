def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    for char in paren_string:
        if char == "(" or char == ")":
            current_group += char
        elif current_group:
            result.append(current_group)
            current_group = ""
    if current_group:
        result.append(current_group)
    return result