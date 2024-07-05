def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    count, start = 0, 0
    result = []
    for i, char in enumerate(paren_string):
        if char == "(":
            if count == 0:
                start = i
            count += 1
        elif char == ")":
            count -= 1
            if count == 0:
                result.append(paren_string[start : i + 1])
    return result