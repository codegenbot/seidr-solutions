def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    level = 0
    current_group = ""
    for char in paren_string:
        if char == "(":
            level += 1
        elif char == ")":
            level -= 1
            if level == 0:
                groups.append(current_group)
                current_group = ""
        else:
            current_group += char
    return groups