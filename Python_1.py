from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    paren_level = 0

    for char in paren_string:
        if char == "(":
            if paren_level > 0:
                temp += char
            paren_level += 1
        elif char == ")":
            paren_level -= 1
            if paren_level > 0:
                temp += char
            else:
                result.append(temp + char)
                temp = ""

    return result