def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    count = 0
    temp = ""

    for char in paren_string:
        if char == "(":
            count += 1
            if count > 1:
                temp += char
        elif char == ")":
            count -= 1
            if count > 0:
                temp += char
        elif count == 0 and temp:
            result.append(temp)
            temp = ""

    return result