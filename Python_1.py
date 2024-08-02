from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            if temp:
                result.append(temp)
                temp = ""
            temp += char
        elif char == ")":
            temp += char
            result.append(temp)
            temp = ""
    if temp:
        result.append(temp)
    return result