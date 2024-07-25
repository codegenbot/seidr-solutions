def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp_str = ""
    for c in paren_string:
        if c == "(":
            temp_str += c
        elif c == ")":
            temp_str += c
            result.append(temp_str)
            temp_str = ""
    return result