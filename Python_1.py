from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""

    for char in paren_string:
        if char == " ":
            continue
        elif char in ["(", ")"]:
            if char == "(":
                current_group += char
            else:
                while len(current_group) > 1 and current_group[0] != "(":
                    result.append(current_group)
                    current_group = ""
                if not current_group or current_group[0] != "(":
                    return []  # invalid parentheses
                current_group += char
        else:
            current_group += char

    if len(current_group) > 1:
        result.append(current_group)

    return [group for group in result if group]