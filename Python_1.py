from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if not isinstance(paren_string, str):
        return "Input must be a string"
    
    result = []
    temp = ""
    for char in paren_string:
        if char in "()":
            temp += char
        else:
            if temp:
                result.append(temp)
                temp = ""
    if temp:
        result.append(temp)
    return result