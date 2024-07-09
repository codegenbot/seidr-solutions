from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            stack.append(char)
            temp += char
        elif char == ")":
            stack.pop()
            if not stack:
                result.append(temp + ")")
                temp = ""
            else:
                temp += char

    return [x for x in result]