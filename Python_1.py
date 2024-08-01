from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not paren_string or set(paren_string) != set("()"):
        return []

    result = []
    temp = ""
    open_count = 0

    for char in paren_string:
        temp += char
        if char == "(":
            open_count += 1
        elif char == ")":
            open_count -= 1
            if open_count == 0:
                result.append(temp)
                temp = ""
    
    return result