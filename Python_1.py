def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    paren_group = ""
    for char in paren_string:
        if char == "(":
            paren_group += char
        elif char == ")":
            paren_group += char
            result.append(paren_group)
            paren_group = ""
    return result