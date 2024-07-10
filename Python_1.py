def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    curr_group = ""
    for char in paren_string:
        if char == "(":
            curr_group += char
        elif char == ")":
            curr_group += char
            groups.append(curr_group)
            curr_group = ""
    return groups