
def separate_paren_groups(paren_string: str) -> List[str]:
    open_count = 0
    close_count = 0
    groups = []
    current_group = ""
    for char in paren_string:
        if char == "(":
            open_count += 1
            if open_count == 1:
                current_group = ""
        elif char == ")":
            close_count += 1
            if close_count == open_count:
                groups.append(current_group)
                current_group = ""
                open_count = 0
                close_count = 0
        else:
            current_group += char
    return groups