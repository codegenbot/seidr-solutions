from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            temp = "("
        elif char == ")":
            if temp and temp != "(":
                temp += char
                result.append(temp)
                temp = ""
        else:
            if temp:
                temp += char
    return result