from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    in_parentheses = False
    for char in paren_string:
        if char == "(":
            in_parentheses = True
            temp += char
        elif char == ")":
            in_parentheses = False
            temp += char
            result.append(temp)
            temp = ""
        elif in_parentheses:
            temp += char
        else:
            result.append(char)
    result.append(temp)
    return result