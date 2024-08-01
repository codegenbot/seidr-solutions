from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(" and temp:
            result.append(temp)
            temp = ""
        if char in ["(", ")"]:
            temp += char
    if temp:
        result.append(temp)
    return result