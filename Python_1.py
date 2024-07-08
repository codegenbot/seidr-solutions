from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    for char in paren_string:
        temp += char
        if char == ")" and temp.count("(") == temp.count(")"):
            result.append(temp)
            temp = ""
    return result