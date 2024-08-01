from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not paren_string or set(paren_string) - set("()"):
        return []

    result = []
    temp = ""
    for char in paren_string:
        if char == "(":
            temp += char
        elif char == ")":
            temp += char
            result.append(temp)
            temp = ""
    return result