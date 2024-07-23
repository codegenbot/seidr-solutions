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
            while stack and stack[-1] != "(":
                current_group += stack.pop()
            if stack:
                current_group += stack.pop()
            else:
                groups.append(current_group[1:-1])
                current_group = ""

    if stack or (current_group and current_group[0] != "("):
        current_group = (
            current_group[1:]
            if current_group and current_group[0] == ")"
            else current_group
        )
        groups.append(current_group)

    return [group for group in groups]