from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    open_count = 0
    
    if paren_string.count("(") != paren_string.count(")"):
        return []
    
    for char in paren_string:
        if char == "(":
            temp += char
            open_count += 1
        elif char == ")":
            temp += char
            open_count -= 1
            if open_count == 0:
                result.append(temp)
                temp = ""
    
    return result