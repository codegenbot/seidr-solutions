def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    start = 0
    count = 0
    for i, char in enumerate(paren_string):
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
            if count == 0 and i - start > 1:
                result.append(paren_string[start : i + 1])
                start = i + 1
    return result