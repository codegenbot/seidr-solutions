```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    stack = []

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            current_group += char
        elif char == ")":
            if stack and stack[-1] == "(":
                result.append(current_group)
                current_group = ""
            else:
                while stack and stack[-1] != "(":
                    current_group += stack.pop()
                if not stack or stack.pop() != "(":
                    return []  # invalid parentheses
                current_group += char
        else:
            while stack and stack[-1] != "(":
                current_group += stack.pop()
            if not stack or stack.pop() != "(":
                return []  # invalid parentheses
            current_group += char

    result.append(current_group)
    return result