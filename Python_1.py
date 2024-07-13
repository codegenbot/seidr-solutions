def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    curr_group = ""
    for char in paren_string:
        if char in "()":
            curr_group += char
        elif curr_group:
            result.append(curr_group)
            curr_group = ""
    if curr_group:
        result.append(curr_group)
    return result