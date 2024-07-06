def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    open_count = 0
    start_index = 0
    for i, char in enumerate(paren_string):
        if char == "(":
            open_count += 1
        elif char == ")":
            open_count -= 1
        if open_count == 0 and i > start_index:
            result.append(paren_string[start_index : i + 1])
            start_index = i + 1
    return result