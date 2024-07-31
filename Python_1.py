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
            if not stack:
                groups.append(current_group)
                current_group = ""
            else:
                stack.pop()  # remove the '(' that matches this ')'
        else:
            while stack and stack[-1] != "(":
                current_group += stack.pop()
            if not stack:
                groups.append(current_group)
                current_group = ""
            current_group += char

    while stack:
        current_group += stack.pop()

    if current_group:
        groups.append(current_group)

    return [group.strip() for group in groups]