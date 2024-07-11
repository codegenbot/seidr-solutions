```
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
                return ["Error: No parentheses found"]
        elif c == "(" and not stack:
            return ["Error: No parentheses found"]

    if stack:
        return ["Error: No parentheses found"]
    if groups:
        result.append(groups)

    if len(result) == 0:
        return ["Error: No parentheses found"]
    if len(result) == 1:
        return [g.strip() for g in result[:1]]

    return [g.strip() for g in result]