from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = [""]
    current_group = ""

    for char in paren_string:
        if char in "()":
            if current_group:
                result.append(current_group)
            current_group = ""
            stack.append("(") if char == "(" else stack.pop()
        elif char.isalnum():
            current_group += char

    if current_group:
        result.append(current_group)

    return result