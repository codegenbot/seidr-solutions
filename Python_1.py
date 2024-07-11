from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    result = []

    for paren in paren_string:
        if paren == " ":
            continue
        if paren == "(":
            stack.append(paren)
        elif paren == ")":
            group = ""
            while stack and stack.pop() != "(":
                group += ")"
            groups.append(group)

    return [group + "(" + "".join(stack) for group in groups]