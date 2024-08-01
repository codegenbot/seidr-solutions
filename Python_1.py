from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    for char in paren_string:
        if char in ["(", ")"]:
            current_group += char
        else:
            current_group += char
            if "(" not in current_group and ")" not in current_group:
                result.append(current_group)
                current_group = ""
    return result