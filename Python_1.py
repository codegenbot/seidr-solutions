def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char == "(" and group != "":
            result.append(group)
            group = ""
        group += char
    if group:
        result.append(group)
    return result