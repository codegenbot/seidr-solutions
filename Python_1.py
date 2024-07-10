def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    groups = []
    temp = ""
    for char in paren_string:
        temp += char
        if temp.count("(") == temp.count(")"):
            groups.append(temp)
            temp = ""
    return groups