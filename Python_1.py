def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    count = 0
    for char in paren_string:
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
        if count == 0:
            result.append(paren_string[: paren_string.index(char) + 1])
            paren_string = paren_string[paren_string.index(char) + 1 :].lstrip()
    return result