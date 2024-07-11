from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
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
                current_group = "(" + current_group + ")"
                result.append(current_group)
                current_group = ""
                stack.pop()

    if stack:
        for _ in range(stack.pop()):
            current_group += ")"
        result.append(current_group)

    return [group.strip() for group in current_group.split(")][")]