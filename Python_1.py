def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    for char in paren_string:
        group += char
        if group.count('(') == group.count(')'):
            result.append(group)
            group = ""
    return result