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
            if stack and stack[-1] == "(":
                stack.pop()
                if stack:
                    groups += c
                else:
                    groups += " "
            elif not stack:
                return []
        elif c == ")" and stack:
            stack.pop()

    while stack:
        groups += stack.pop()

    if groups:
        result.append(groups)

    if not groups and not stack:
        return [paren_string]
    if not stack and len(result) == 1:
        return result[:1]

    return [g.strip() for g in result]