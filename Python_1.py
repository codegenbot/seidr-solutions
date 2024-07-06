from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""

    for char in paren_string:
        if char == " " or len(group) > 0 and char != "(" and char != ")":
            if group:
                result.append(group)
                group = ""
        elif char == "(":
            while group and group[-1] != "(":
                result.append(group)
                group = ""
            group += char
        else:
            group += char

    if group:
        result.append(group)

    return [group for group in result if group]