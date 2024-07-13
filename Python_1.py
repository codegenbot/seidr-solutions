def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp_group = ""
    for char in paren_string:
        if char in "()":
            temp_group += char
        elif temp_group:
            result.append(temp_group)
            temp_group = ""
    if temp_group:
        result.append(temp_group)
    return result