from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []

    for paren in paren_string:
        if paren == " ":
            continue
        if paren in ["(", "["]:
            stack.append(paren)
            groups.append(paren)
        elif paren in [")", "]"]:
            top = stack.pop()
            groups.append(paren)
            if top == "(":
                groups.append(")")
            else:
                groups.append("]")

    while stack:
        group = ""
        for _ in range(len(stack)):
            top = stack.pop()
            group += top
        result.append(group + "".join(groups[:1]))
        groups = groups[1:]

    return [group for group in groups]