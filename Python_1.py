def separate_paren_groups(paren_string: str) -> list[str]:
    groups = []
    start = 0
    level = 0
    for i, c in enumerate(paren_string):
        if c == "(":
            level += 1
        elif c == ")":
            level -= 1
            if level == 0 and i > start:
                groups.append(paren_string[start : i + 1])
                start = i + 1
    return groups