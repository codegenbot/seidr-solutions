from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    curr_group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            curr_group += char
        elif char == ")":
            while stack and stack[-1] != "(":
                curr_group += stack.pop()
            if stack:
                curr_group += stack.pop()
            else:
                result.append(curr_group)
                curr_group = ""

    if curr_group:
        result.append(curr_group)

    return [group.strip() for group in result]