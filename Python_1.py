```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            current_group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                current_group += stack.pop()
            if stack:
                current_group += stack.pop()  # Remove the matching opening parenthesis
            else:
                groups.append(current_group[1:])  # Add the complete group to the result
                current_group = ""
            while stack:  # Pop all remaining characters from the stack
                current_group += stack.pop()

    if current_group:
        groups.append(current_group[1:])  # Add the last group to the result

    return [group for group in groups]