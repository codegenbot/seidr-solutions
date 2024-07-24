```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp = ""

    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            if temp:  
                result.append(temp)
                temp = ""
            stack.append(char)
            temp += char
        elif char == ")":
            stack.pop()
            temp += char
            if not stack:
                result.append(temp)
                temp = ""

    if not stack:
        result.append(temp)

    return result