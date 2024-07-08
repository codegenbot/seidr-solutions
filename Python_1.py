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
            current_group += "("
        elif char == ")":
            if stack and stack[-1] == "(":
                stack.pop()
                current_group += ")"
            else:
                groups.append(current_group + ")")
                current_group = ""

    if stack:
        for _ in range(stack.__len__()):
            current_group += ")"
        groups.append(current_group)
    elif current_group:
        groups.append(current_group)

    return [group[1:-1] for group in groups]