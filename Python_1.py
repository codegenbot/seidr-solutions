from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    temp = ""
    for char in paren_string:
        temp += char
        if temp.count("(") == temp.count(")"):
            result.append(temp)
            temp = ""
    return result