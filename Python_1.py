def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp_group = ""
    for char in paren_string:
        if char == "(":
            temp_group = ""
        elif char == ")":
            result.append(temp_group)
        else:
            temp_group += char
    return result