def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    count = 0
    current = ""
    for char in paren_string:
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
        current += char
        if count == 0:
            result.append(current.replace(" ", ""))
            current = ""
    return result