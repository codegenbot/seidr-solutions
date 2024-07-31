from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp_group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            temp_group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                temp_group += stack.pop()
            if stack:
                temp_group += stack.pop()
            else:
                result.append(temp_group)
                temp_group = ""

    if temp_group:
        result.append(temp_group)

    return [group.strip() for group in result]