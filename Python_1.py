def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            temp += char
        elif char == ")" and temp:
            temp += char
            result.append(temp)
            temp = ""
    return result