def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp_str = ""
    for char in paren_string:
        if char == "(":
            temp_str += char
        elif char == ")":
            temp_str += char
            result.append(temp_str)
            temp_str = ""
    return result