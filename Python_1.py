```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            current_group += char
        elif char == ")":
            stack.pop()
            current_group += char
        else:
            raise ValueError("Invalid input. String should only contain '(', ')', and spaces.")

    if stack:
        while stack:
            current_group += ")"
            stack.pop()
        groups.append(current_group)
    groups.append(current_group)

    return groups