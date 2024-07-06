def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    start = 0
    while True:
        open_count = 0
        close_count = 0
        for i in range(start, len(paren_string)):
            if paren_string[i] == "(":
                open_count += 1
            elif paren_string[i] == ")":
                close_count += 1
            if open_count == close_count:
                result.append(paren_string[start : i + 1])
                start = i + 1
                break
        else:
            return result