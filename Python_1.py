def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    count = 0
    for char in paren_string:
        if char == "(":
            count += 1
            if count == 1:
                start_index = paren_string.index(char)
        elif char == ")":
            count -= 1
            if count == 0:
                result.append(paren_string[start_index : paren_string.index(char) + 1])
    return result