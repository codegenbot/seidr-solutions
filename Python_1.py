def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    level = 0
    start = 0
    for i, char in enumerate(paren_string):
        if char == "(":
            level += 1
            if level == 1:
                start = i
        elif char == ")":
            level -= 1
            if level == 0:
                result.append(paren_string[start : i + 1])
    return result