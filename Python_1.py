def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char in "()":
            temp += char
        elif temp:
            result.append(temp)
            temp = ""
    if temp:
        result.append(temp)
    return result