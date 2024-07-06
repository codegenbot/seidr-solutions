def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    start = 0
    count = 0
    for i in range(len(paren_string)):
        if paren_string[i] == "(":
            count += 1
        elif paren_string[i] == ")":
            count -= 1
        if count == 0 and i > start:
            result.append(paren_string[start + 1 : i])
            start = i + 1
    return result