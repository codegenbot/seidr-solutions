from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char in ["(", "["]:
            stack.append(char)
            group += char
        elif char in [")", "]"]:
            while stack and char != (stack[-1] + 1) % 2:
                stack.pop()
            if not stack:
                result.append(group)
                group = ""
            else:
                group += char
            stack.pop()

    if stack or group:
        result.append(group)

    return [group[1:] + group[0] for group in result]