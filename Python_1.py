def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    count = 0
    current_group = ""
    for char in paren_string:
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
        if count == 0 and current_group:
            result.append(current_group)
            current_group = ""
        if count > 0:
            current_group += char
    return result