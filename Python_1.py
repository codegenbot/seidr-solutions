from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            temp += "("
        elif char == ")":
            temp += ")"
            if len(temp) > 1 and temp[-2] == "(":
                result.append("(" + temp + ")")
                temp = ""
    if temp:
        result.append(temp)
    return [s for s in result if s]