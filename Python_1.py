from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp_str = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            temp_str += char
        elif char == ")":
            if stack and stack[-1] == "(":
                stack.pop()
                temp_str += char
                result.append(temp_str[1:])  # Remove the extra '('
                temp_str = ""

    if stack:
        raise ValueError("Parentheses not balanced")

    return [temp_str] if temp_str else []