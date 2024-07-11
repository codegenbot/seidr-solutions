from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == " ":
            continue
        if char == "(":
            temp += "("
        elif char == ")":
            temp += ")"
            if len(temp) > 1 and temp[-2] == "(":
                result.append(temp[:-1])
                temp = ""
    if temp:
        result.append(temp)
    return [x for x in result if x]