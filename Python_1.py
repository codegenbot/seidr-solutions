from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not all(c.isalnum() or c in "()[]" for c in paren_string):
        return []

    result = []
    stack = [""]
    current_group = ""

    for char in paren_string:
        if char == "(" or char == "[":
            if current_group:
                result.append(current_group)
            current_group = ""
            stack.append(char)
        elif (char == ")" and stack[-1] == "(") or (char == "]" and stack[-1] == "["):
            stack.pop()
            if not stack:
                result.append(current_group)
                current_group = ""
        else:
            current_group += char

    if current_group:
        result.append(current_group)

    return result