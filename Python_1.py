from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    opened_parentheses = 0

    for char in paren_string:
        if char == "(":
            if opened_parentheses > 0:
                current_group += char
            opened_parentheses += 1
        elif char == ")":
            opened_parentheses -= 1
            if opened_parentheses > 0:
                current_group += char
            if opened_parentheses == 0:
                result.append(current_group)
                current_group = ""
        else:
            if opened_parentheses > 0:
                current_group += char

    return result