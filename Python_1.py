def separate_paren_groups(paren_string: str) -> list[str]:
    result = []
    start = 0
    count = 0
    for i in range(len(paren_string)):
        if paren_string[i] == "(":
            count += 1
        elif paren_string[i] == ")":
            count -= 1
            if count == 0:
                result.append(paren_string[start : i + 1])
                start = i + 1
    return result