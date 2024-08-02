def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    count = 0
    for char in paren_string:
        if char == "(":
            count += 1
            if count > 1:
                temp += char
        elif char == ")":
            count -= 1
            if count > 0:
                temp += char
            if count == 0:
                result.append(temp)
                temp = ""
    return result