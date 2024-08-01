from typing import List
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    open_brackets = 0
    for char in paren_string:
        if char == "(":
            open_brackets += 1
        current_group += char
        if char == ")":
            open_brackets -= 1
            if open_brackets == 0:
                result.append(current_group)
                current_group = ""
    return result