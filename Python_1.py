from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    level = 0

    for char in paren_string:
        current_group += char

        if char == '(':
            level += 1
        elif char == ')':
            level -= 1

        if level == 0:
            result.append(current_group)
            current_group = ""

    return result