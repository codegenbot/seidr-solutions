from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    open_paren_count = 0

    for char in paren_string:
        if char == "(":
            if open_paren_count > 0:
                current_group += char
            open_paren_count += 1
        elif char == ")":
            open_paren_count -= 1
            current_group += char
            if open_paren_count == 0:
                result.append(current_group)
                current_group = ""
    return result