from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            temp += char
        elif char == ")":
            temp += char
            while temp and temp[-1] == "(":
                temp = temp[:-1]
            if temp:
                result.append(temp)
                temp = ""
    if temp:
        result.append(temp)
    return [x.strip() for x in result]