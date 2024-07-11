def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current = ""
    for char in paren_string:
        if char == "(":
            current = ""
        elif char == ")":
            result.append(current)
        else:
            current += char
    return result