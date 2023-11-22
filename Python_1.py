from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    current_group = ""
    for char in paren_string:
        current_group += char
        if char == ")":
            result.append(current_group)
            current_group = ""
    return result