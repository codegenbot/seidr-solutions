def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    nest_level = 0

    for char in paren_string:
        if char == "(":
            nest_level += 1
        if nest_level > 0:
            current_group += char
        if char == ")":
            nest_level -= 1
            if nest_level == 0:
                result.append(current_group)
                current_group = ""

    return result