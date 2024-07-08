from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    is_inside_paren = False

    for char in paren_string:
        if char == "(":
            is_inside_paren = True
            temp += char
        elif char == ")" and is_inside_paren:
            temp += char
            result.append(temp)
            temp = ""
            is_inside_paren = False
        elif is_inside_paren:
            temp += char

    return result