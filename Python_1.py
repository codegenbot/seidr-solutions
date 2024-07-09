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
            temp += char
            if not stack:
                result.append(temp)
                temp = ""
    if stack:
        while stack:
            temp += ")"
            stack.pop()
        result.append(temp)

    if not stack and temp:  # Check for remaining chars
        result.append(temp)

    return [x.strip() for x in result]