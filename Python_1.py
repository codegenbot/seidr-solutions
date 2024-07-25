def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    count = 0
    current_group = ""
    for c in paren_string:
        if c == "(":
            count += 1
        elif c == ")":
            count -= 1
            if count == 0:
                result.append(current_group)
                current_group = ""
        if count > 0:
            current_group += c
    return result