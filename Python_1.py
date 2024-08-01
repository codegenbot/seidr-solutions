from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    if paren_string.count("(") != paren_string.count(")"):
        return []

    result = []
    temp = ""
    for char in paren_string:
        temp += char
        if char == ")":
            result.append(temp)
            temp = ""
    return result