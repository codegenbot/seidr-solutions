from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    group_start = False
    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            group_start = True
            current_group += char
        elif char == ")":
            current_group += char
            group_start = False
        else:
            if group_start:
                current_group += char
            else:
                result.append(current_group)
                current_group = ""
    if group_start:
        result.append(current_group)
    return result