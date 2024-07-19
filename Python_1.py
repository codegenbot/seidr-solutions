def separate_paren_groups(paren_string: str) -> List[str]:
    res = []
    group = ""
    for char in paren_string:
        if char == "(":
            group += char
        elif char == ")":
            group += char
            res.append(group)
            group = ""
    return res