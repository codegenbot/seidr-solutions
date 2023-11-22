from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    current_group = ""

    for char in paren_string:
        if char == "(":
            if current_group:
                stack.append(current_group)
                current_group = ""
            stack.append(char)
        elif char == ")":
            if current_group:
                stack.append(current_group)
                current_group = ""
            temp = ""
            while stack and stack[-1] != "(":
                temp = stack.pop() + temp
            stack.pop()
            stack.append(temp)
        else:
            current_group += char

    if current_group:
        stack.append(current_group)

    return stack