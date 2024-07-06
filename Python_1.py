from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""

    for char in paren_string:
        if char.isspace():
            continue
        if char == "(":
            stack.append(char)
            current_group += char
        elif char == ")":
            while len(stack) and stack[-1] != "(":
                current_group += stack.pop()
            if not stack:
                result.append(current_group)
                current_group = ""
            else:
                stack.pop()  # remove the leftmost '('
                current_group += char

    return [group.strip() for group in result]