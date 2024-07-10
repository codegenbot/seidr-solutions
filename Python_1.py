from typing import List


def separate_paren_groups(paren_string: str) -> list[str]:
    result = []
    stack = []
    groups = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            groups += char
        elif char == ")":
            if stack and stack.pop() == "(":
                groups += char
                if not stack:
                    result.append(groups.lstrip("(").rstrip(")"))
                    groups = ""
            else:
                return []
    while stack:
        if len(stack) < 2:
            return []
        stack.pop()
    result.append(groups.lstrip("(").rstrip(")") if groups else "")
    return result