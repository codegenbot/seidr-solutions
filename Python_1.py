def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    curr_group = ""
    for char in paren_string:
        if char == "(":
            curr_group += char
        elif char == ")":
            curr_group += char
            result.append(curr_group)
            curr_group = ""
    return result