def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
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