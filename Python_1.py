def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    for group in paren_string.split(" "):
        if len(group) > 1 and group[0] == "(" and group[-1] == ")":
            groups.append(group)
    return groups