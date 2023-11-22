from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    depth = 0

    for char in paren_string:
        if char == "(":
            depth += 1
        elif char == ")":
            depth -= 1

        current_group += char

        if depth == 0:
            if current_group.strip() != "":
                result.append(current_group.strip())
            current_group = ""

    return result