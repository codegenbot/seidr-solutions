def separate_paren_groups(paren_string: str) -> list[str]:
    groups = []
    current_group = ""
    for char in paren_string:
        if char == "(" or char == ")":
            if len(current_group) > 0 and current_group[-1] != char:
                groups.append(current_group)
                current_group = ""
        else:
            current_group += char
    if len(current_group) > 0:
        groups.append(current_group)
    return groups