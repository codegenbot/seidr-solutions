from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    inside_parentheses = False

    for char in paren_string:
        if char == "(":
            inside_parentheses = True
            current_group += char
        elif char == ")":
            inside_parentheses = False
            current_group += char
            result.append(current_group)
            current_group = ""
        elif inside_parentheses:
            current_group += char

    return result