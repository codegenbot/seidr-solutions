from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        if char == " ":
            continue
        elif char == "(":
            temp += char
        elif char == ")":
            temp += char
            if len(temp) > 1 and temp[0] == "(":
                result.append("(" + temp)
                temp = ""
    if temp:
        result.append(temp)
    return [s for s in map(str, filter(None, result))]