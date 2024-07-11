from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ""

    for c in paren_string:
        if c == " ":
            continue
        if c == "(":
            stack.append(c)
            group += c
        elif c == ")":
            if stack and stack[-1] == "(":
                stack.pop()
                group += c
            else:
                groups.append(group + c)
                group = ""
                stack = []

    if stack:
        while stack:
            group += ")"
            stack.pop()
        groups.append(group)

    return [group.strip() for group in groups]