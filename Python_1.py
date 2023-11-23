def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    count = 0
    temp = ""
    for char in paren_string:
        if char == "(":
            count += 1
            temp += char
        elif char == ")":
            count -= 1
            temp += char
            if count == 0:
                result.append(temp)
                temp = ""
    return result