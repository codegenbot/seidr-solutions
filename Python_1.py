from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    nested_level = 0

    for char in paren_string:
        if char == "(":
            if nested_level > 0:
                current_group += "("
            nested_level += 1
        elif char == ")":
            nested_level -= 1
            if nested_level > 0:
                current_group += ")"
            if nested_level == 0:
                result.append(current_group)
                current_group = ""

    return result