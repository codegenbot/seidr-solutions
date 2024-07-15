def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    curr_group = ""
    for char in paren_string:
        if char == "(":
            if curr_group:
                result.append(curr_group)
            curr_group = "("
        elif char == ")":
            curr_group += ")"
            result.append(curr_group)
            curr_group = ""
    return result