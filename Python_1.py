from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = ""

    for c in paren_string:
        if c == " ":
            continue
        if c == "(":
            stack.append(c)
            groups += c
        elif c == ")":
            if stack:
                stack.pop()
                groups += c
                if not stack:
                    result.append(groups + " ")
                    groups = ""
            else:
                return ["Program did not receive expected input"]
        elif c == "(" and not stack:
            return []

    if len(stack) != 0:
        return ["Program did not receive expected input"]

    if groups:
        result.append(groups)

    return [g.strip() for g in result]