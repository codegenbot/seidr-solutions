def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    while paren_string:
        start = paren_string.find("(")
        end = paren_string.rfind(")")
        if start == -1 or end == -1:
            break
        group = paren_string[start + 1 : end]
        groups.append(group)
        paren_string = paren_string[end + 1 :]
    return groups