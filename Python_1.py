def separate_paren_groups(paren_string: str) -> list:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(" or char == ")":
            temp += char
            if temp.count("(") == temp.count(")"):
                result.append(temp.replace(" ", ""))
                temp = ""
    return result