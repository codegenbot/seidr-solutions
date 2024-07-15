from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if "(" not in paren_string or ")" not in paren_string:
        return ["Input should include parentheses"]
    
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