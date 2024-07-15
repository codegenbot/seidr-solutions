def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    count = 0
    temp = ""
    for char in paren_string.replace(" ", ""):
        temp += char
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
            if count == 0:
                result.append(temp)
                temp = ""
    return result