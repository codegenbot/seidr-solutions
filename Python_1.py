from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            groups.append("(")
        elif char == ")":
            if stack and stack[-1] == "(":
                stack.pop()
                groups.append(")")
            else:
                groups.append(")")

    while stack:
        stack.pop()

    result = ["".join(group) for group in [group[::-1] for group in groups]]

    return result