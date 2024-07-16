from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""

    if paren_string[0] != "(" or paren_string[-1] != ")":
        return ["Input string must start and end with parentheses."]

    for char in paren_string[1:-1]:  # Exclude first and last parentheses
        current_group += char
        if char == "(":
            open_brackets_count = 1
            while open_brackets_count != 0:
                for char in paren_string[1:-1]:
                    current_group += char
                    if char == "(":
                        open_brackets_count += 1
                    elif char == ")":
                        open_brackets_count -= 1
        elif char == ")":
            result.append(current_group)
            current_group = ""

    return result