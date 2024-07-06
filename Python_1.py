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
                current_group += stack.pop() + char
            else:
                groups.append(current_group)
                current_group = ""

    if current_group:
        groups.append(current_group)

    return [group.strip() for group in groups]