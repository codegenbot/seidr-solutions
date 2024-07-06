def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ""
    count = 0
    for char in paren_string:
        if char == "(":
            count += 1
        elif char == ")":
            count -= 1
        if count == 0:
            groups.append(group)
            group = ""
        else:
            group += char
    return groups