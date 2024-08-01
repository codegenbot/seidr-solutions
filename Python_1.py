from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    open_count = 0

    for char in paren_string:
        current_group += char

        if char == "(":
            open_count += 1
        elif char == ")":
            open_count -= 1

        if open_count == 0:
            result.append(current_group)
            current_group = ""

    return result