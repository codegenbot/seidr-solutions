def separate_paren_groups(paren_string: str) -> list[str]:
    groups = []
    level = 0
    start = -1
    for i, c in enumerate(paren_string):
        if c == "(":
            level += 1
            if level == 1:
                start = i
        elif c == ")":
            level -= 1
            if level == 0:
                groups.append(paren_string[start : i + 1])
    return groups