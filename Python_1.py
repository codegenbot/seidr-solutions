def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    start = 0
    while True:
        try:
            open_index = paren_string.index("(", start)
            close_index = paren_string.rindex(")", start, open_index + 1)
            group = paren_string[open_index : close_index + 1]
            groups.append(group)
            start = close_index + 1
        except ValueError:
            break
    return groups