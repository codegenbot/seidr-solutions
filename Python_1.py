from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp = ""

    for char in paren_string:
        if char.isspace():
            continue
        elif char == "(":
            stack.append(char)
            temp += char
        elif char == ")":
            stack.pop()
            temp += char
            if not stack:
                result.append(temp)
                temp = ""
        else:  # Non-whitespace characters are part of the group
            while stack and char != stack[-1]:
                temp += stack.pop()
            if char == ")":
                temp += ")"
            elif char == "(":
                temp += "("
            temp += char

    if stack:
        while stack:
            temp += "("
            stack.pop()
        result.append(temp)
    result.append(temp)

    return [x for x in result]