def separate_paren_groups(paren_string):
    groups = []
    current_group = ""
    depth = 0
    for char in paren_string:
        if char == "(":
            depth += 1
            current_group += char
        elif char == ")":
            depth -= 1
            current_group += char
            if depth == 0 and len(current_group) > 0 and current_group[0] == "(":
                groups.append(current_group)
                current_group = ""
    return groups