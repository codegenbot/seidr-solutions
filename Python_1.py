from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                group += stack.pop()
            if not stack or stack[-1] == "(":
                groups.append(group + ")")
                group = ""
            else:
                group += stack.pop()  # pop remaining '(' at the end
                groups.append(group)
                group = ""

    return [group] + groups