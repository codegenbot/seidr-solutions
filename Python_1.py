def separate_paren_groups(paren_string: str) -> List[str]:
    open_count = 0
    close_count = 0
    group = []
    groups = []
    for char in paren_string:
        if char == "(":
            open_count += 1
        elif char == ")":
            close_count += 1
        if open_count == close_count and len(group) > 0:
            groups.append("".join(group))
            group = []
        else:
            group.append(char)
    return groups