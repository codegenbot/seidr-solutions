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
            stack.pop()
            groups.append(")")
        else:
            while stack:
                groups.append(")")
                stack.pop()
    return [group for group in map(str, filter(None, result))]