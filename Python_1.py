def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    curr_group = ""
    for char in paren_string:
        curr_group += char
        if curr_group.count("(") == curr_group.count(")"):
            result.append(curr_group)
            curr_group = ""
    return result