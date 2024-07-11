from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []

    for char in paren_string:
        if char == " ":
            continue
        elif char == "(":
            stack.append(char)
            groups.append("(")
        elif char == ")":
            while stack and stack[-1] != "(":
                groups.append(")")
                stack.pop()
            if stack:
                groups.append(")")
                stack.pop()

    result = [
        "".join(group) for group in [groups[i : j + 1] for i, j in enumerate(groups)]
    ]
    return [
        group
        for group in result
        if len(stack) == 0 or stack[0] == "(" and group.count("(") == group.count(")")
    ]