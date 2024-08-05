from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(" or char == ")":
            temp += char
        else:
            if len(temp) > 0:
                result.append(temp)
                temp = ""
    if len(temp) > 0:
        result.append(temp)
    return result