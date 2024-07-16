from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp_str = ""

    for char in paren_string:
        if char == " ":
            continue
        elif char == "(":
            stack.append(char)
            temp_str += char
        elif char == ")":
            if stack:
                temp_str += char
                stack.pop()
            else:
                result.append(temp_str)
                temp_str = ""
    if stack or (stack == [] and temp_str):
        result.append(temp_str)

    return [s.strip() for s in result]