def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    count = 0
    for char in paren_string:
        if char == "(":
            if count > 0:
                temp += char
            count += 1
        elif char == ")":
            count -= 1
            if count > 0:
                temp += char
            if count == 0:
                result.append(temp)
                temp = ""
        elif count > 0:
            temp += char
    return result