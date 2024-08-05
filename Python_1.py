from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    opened = 0

    for char in paren_string:
        temp += char
        if char == "(":
            opened += 1
        elif char == ")":
            opened -= 1
            if opened == 0:
                result.append(temp)
                temp = ""

    return result