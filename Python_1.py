from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    in_parentheses = False
    for char in paren_string:
        if char == "(":
            temp += char
            in_parentheses = True
        elif char == ")":
            temp += char
            result.append(temp)
            temp = ""
            in_parentheses = False
        else:
            if in_parentheses:
                temp += char
            else:
                result.append(temp)
                temp = char
    if temp:
        result.append(temp)
    return result