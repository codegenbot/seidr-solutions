from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    
    paren_string = input()
    
    for char in paren_string:
        if char in "()":
            temp += char
        elif temp:
            result.append(temp)
            temp = ""
    if temp:
        result.append(temp)
    return result