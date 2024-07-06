from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = ""

    for char in paren_string:
        if char == " ":
            continue
        if char in ["(", "]"]:
            if char == "(":
                stack.append(char)
            else:
                while stack and stack[-1] != "(":
                    groups += char
                    if not stack:
                        break
                    stack.pop()
                if stack:
                    groups += char
                else:
                    result.append(groups + ")")
                    groups = ""
        else:
            groups += char

    while stack:
        for _ in range(stack.pop()):
            groups += ")"

    if groups:
        result.append(groups + ")")

    return [group[1:-1] for group in result]