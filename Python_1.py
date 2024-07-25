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
            if not stack and temp.startswith("("):
                temp = temp[1:-1]

    if temp or stack:
        result.append(temp)

    return result