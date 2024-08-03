from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            if temp and temp[-1] == ")":
                result.append(temp)
                temp = ""
            temp += char
        elif char == ")":
            temp += char
            if temp.count("(") == temp.count(")"):
                result.append(temp)
                temp = ""
    return result