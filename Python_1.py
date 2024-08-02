from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    in_parentheses = False
    for char in paren_string:
        if char == "(":
            in_parentheses = True
            if temp:
                result.append(temp)
                temp = ""
        elif char == ")":
            in_parentheses = False
            if temp:
                result.append(temp + char)
                temp = ""
        elif in_parentheses:
            temp += char
    if temp:
        result.append(temp)
    return result