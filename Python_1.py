from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    paren_string = "(" + paren_string
    current_group = ""
    for c in paren_string:
        if c == "(":
            current_group = ""
        elif c == ")":
            groups.append(current_group)
            current_group = ""
        else:
            current_group += c
    return groups