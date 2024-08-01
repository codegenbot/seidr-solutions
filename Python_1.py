from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not paren_string or set(paren_string) != set("()"):
        return []

    result = []
    temp = ""
    count = 0
    for char in paren_string:
        if char == "(":
            count += 1
            temp += char
        elif char == ")":
            count -= 1
            temp += char
            if count == 0:
                result.append(temp)
                temp = ""

    return result