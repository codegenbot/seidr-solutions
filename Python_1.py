from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    depth = 1
    for char in paren_string[1:-1]:
        if char == "(":
            depth += 1
            current_group += char
        elif char == ")":
            depth -= 1
            if depth == 0:
                result.append(current_group)
                current_group = ""
            else:
                current_group += char
    return result