def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(" or char == ")":
            if temp != "":
                result.append(temp)
            temp = ""
        else:
            temp += char
    if temp != "":
        result.append(temp)
    return result