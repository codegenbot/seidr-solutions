from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not paren_string or not set(paren_string).issubset({'(', ')'}):
        return []

    result = []
    temp = ""
    open_count = 0

    for char in paren_string:
        if char == "(":
            open_count += 1
            temp += char
        elif char == ")":
            open_count -= 1
            temp += char

            if open_count == 0:
                result.append(temp)
                temp = ""
    
    return result