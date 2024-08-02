from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    open_paren_count = 0
    
    for char in paren_string:
        if char == "(":
            if open_paren_count > 0:
                temp += char
            open_paren_count += 1
        elif char == ")":
            open_paren_count -= 1
            if open_paren_count == 0:
                result.append(temp)
                temp = ""
            else:
                temp += char
        else:
            if open_paren_count > 0:
                temp += char
    return result