from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    stack = 0
    for char in paren_string:
        if char == "(":
            stack += 1
        temp += char
        if char == ")" and stack > 0:
            stack -= 1
        if stack == 0:
            result.append(temp)
            temp = ""
    return result