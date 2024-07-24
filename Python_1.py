from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            stack.append("(")
        elif char == ")" and stack:
            stack.pop()
        elif char == ")" and not stack:
            result.append(current_group)
            current_group = ""
        else:
            current_group += char

    result.append(current_group)
    return result