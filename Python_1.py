from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char in ["(", ")"]:
            group += char
        else:
            result.append(group)
            group = ""

    if group:
        result.append(group)

    return [group for group in result if "(" in group and ")" in group]