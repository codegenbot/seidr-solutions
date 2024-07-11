from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.strip()  
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
                return []
        elif c == "(" and not stack:
            return []

    if stack:
        return []
    if groups:
        result.append(groups)

    if not groups and not stack:
        return [paren_string]
    if not stack and len(result) == 1:
        return result[:1]

    if stack or (not stack and len(result) > 1):
        return []
    if groups:
        result.append(groups)

    return [g.strip() for g in result]