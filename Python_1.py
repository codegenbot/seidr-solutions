def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char in "()":
            group += char
        elif group:
            result.append(group)
            group = ""
    if group:
        result.append(group)
    return result