from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                group += char
                stack.pop()
            if stack:
                group += char
                stack.pop()
            else:
                groups.append(group)
                group = ""

    if group:
        groups.append(group)

    return [group[1:-1] for group in groups]