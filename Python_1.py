def separate_paren_groups(paren_string: str) -> list[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            temp += char
        elif char == ")":
            temp += char
            result.append(temp)
            temp = ""
    return result