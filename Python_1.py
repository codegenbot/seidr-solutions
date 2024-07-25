```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp = ""

    for char in paren_string:
        if char == " ":
            temp += char
        elif char == "(":
            stack.append(char)
            temp += char
        elif char == ")":
            if stack and stack[-1] == "(":
                stack.pop()
                temp += char
                if not stack and temp:
                    result.append(temp)
                    temp = ""

    if not stack and temp:
        result.append(temp)

    return result