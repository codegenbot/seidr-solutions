from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""

    if paren_string[0] != "(" or paren_string[-1] != ")":
        return ["Input string must start and end with parentheses."]

    for char in paren_string:
        if char == "(":
            if current_group:
                result.append(current_group)
            current_group = "("
        elif char == ")":
            current_group += ")"
            result.append(current_group)
            current_group = ""

    return result