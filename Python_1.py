def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    in_group = False
    for char in paren_string:
        if char == "(":
            in_group = True
        elif char == ")":
            in_group = False
            result.append(group)
            group = ""
        elif in_group:
            group += char
    return result