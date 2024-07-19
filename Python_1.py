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
            if stack:
                group += stack.pop() + char
            else:
                groups.append(group)
                group = ""
        else:
            while stack and stack[-1] != "(":
                group += stack.pop()
            if stack:
                group += stack.pop() + char
                stack.append("(")
            else:
                stack.append(char)
                group += char

    if stack:
        for _ in range(len(stack)):
            group += stack.pop()
        groups.append(group)

    return [group[1:] for group in groups]