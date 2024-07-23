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
                if len(stack) > 1 or (stack and stack[-1] != "("):
                    return []
                current_group += stack.pop()
            else:
                groups.append(current_group)
                current_group = ""

    if current_group:
        while stack:
            current_group += stack.pop()
        if stack:
            return []
        groups.append(current_group)

    return [group[1:-1] for group in groups]