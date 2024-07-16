from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ""
    stack = []

    for char in paren_string:
        if char == "(":
            stack.append("(")
        elif char == ")":
            stack.pop()

        group += char

        if not stack:
            result.append(group)
            group = ""

    return result