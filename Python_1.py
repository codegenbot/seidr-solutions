def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    open_brace = 0
    for char in paren_string:
        if char == "(":
            open_brace += 1
            temp += char
        elif char == ")":
            open_brace -= 1
            temp += char
            if open_brace == 0:
                result.append(temp)
                temp = ""
    return result