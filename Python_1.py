def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    counter = 0
    for char in paren_string:
        if char == "(":
            counter += 1
        elif char == ")":
            counter -= 1
        current_group += char
        if counter == 0:
            result.append(current_group)
            current_group = ""
    return result