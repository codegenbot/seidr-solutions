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
            if stack:
                stack.pop()
                groups.append(")")
            else:
                groups.append(")")

        if not stack:
            result.append("".join(groups))
            groups = []

    if stack:
        result.append("".join(groups))

    return [group for group in result if "(" in group or ")" in group]