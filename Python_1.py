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
            while stack and stack[-1] != "(":
                temp_str += stack.pop()
            if stack:
                temp_str += stack.pop()
            else:
                result.append(temp_str)
                temp_str = ""

    if temp_str:
        result.append(temp_str)

    return [s.strip() for s in result]