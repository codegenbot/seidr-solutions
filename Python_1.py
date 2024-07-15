from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    open_brackets = 0

    for char in paren_string:
        if char == "(":
            if open_brackets > 0:
                current_group += char
            open_brackets += 1
        elif char == ")":
            open_brackets -= 1
            if open_brackets > 0:
                current_group += char
            if open_brackets == 0:
                result.append(current_group)
                current_group = ""
        else:
            if open_brackets > 0:
                current_group += char

    return result