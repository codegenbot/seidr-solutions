from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            current_group += char
        elif char == ")":
            stack = [char]
            temp = ""
            while stack and (stack[-1] != "(" or len(stack) > 1):
                temp += stack.pop()
            groups.append(temp + current_group + "(")
            current_group = ""
        else:
            current_group += char

    if current_group:
        groups.append(current_group)

    return groups