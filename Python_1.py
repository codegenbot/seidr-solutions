from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    count_opening = 0

    for char in paren_string:
        if char == "(":
            count_opening += 1
        if count_opening > 0:
            current_group += char
        if char == ")":
            count_opening -= 1
            if count_opening == 0:
                result.append(current_group)
                current_group = ""

    return result