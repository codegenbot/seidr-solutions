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
            if stack:
                stack.pop()
                group += c
                if not stack:
                    groups.append(group)
                    group = ""
            else:
                return []  # unmatched ')'

    if stack:  # unmatched '('
        for _ in range(len(stack)):
            group += ")"
            stack.pop()
        groups.append(group)

    return [g.strip() for g in groups]