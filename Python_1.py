from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ""
    level = 0
    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            level += 1
        elif char == ")":
            level -= 1
        if level == 0:
            groups.append(group)
            group = ""
    if group:
        groups.append(group)
    return [group for group in groups if group]