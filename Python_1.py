def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char == "(":
            group += char
        elif char == ")":
            group += char
            result.append(group)
            group = ""
    return result