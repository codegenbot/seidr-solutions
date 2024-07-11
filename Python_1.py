from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            current_group += char
        elif char == ")":
            while len(stack) > 0 and stack[-1] != "(":
                stack.pop()
            if len(stack) == 0:
                groups.append(current_group + char)
                current_group = ""
            else:
                stack.pop()
                current_group += char

    return [group for group in groups if group]