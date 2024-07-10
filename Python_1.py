def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char == "(":
            group = ""
        elif char == ")":
            result.append(group)
        else:
            group += char
    return result