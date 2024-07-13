def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string.replace(" ", ""):
        temp += char
        if temp.count("(") == temp.count(")"):
            result.append(temp)
            temp = ""
    return result