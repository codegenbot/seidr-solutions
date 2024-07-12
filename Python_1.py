def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        if char == "(":
            if group:
                result.append(group)
            group = "("
        elif char == ")":
            group += ")"
            result.append(group)
            group = ""
    return result