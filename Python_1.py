from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    group = ""

    for char in paren_string:
        if char.isspace():
            continue

        if char == "(":
            stack.append(char)
            group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                group += stack.pop()
            if not stack:
                groups.append(group)
                group = ""
            else:
                stack.pop()
        else:
            while stack:
                group += stack.pop()
            if stack:
                groups.append(group)
                group = ""
            group += char

    if stack:
        while stack:
            group += stack.pop()
        groups.append(group)

    return [group + ")" for group in groups]