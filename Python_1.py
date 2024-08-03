from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    count = 0
    
    for char in paren_string:
        if count < 0:
            return ["Invalid parentheses"]
        
        temp += char
        if char == "(":
            count += 1
        elif char == ")":
            if count == 0:
                return ["Invalid parentheses"]
            count -= 1
            if count == 0:
                result.append(temp)
                temp = ""
    
    if count != 0:
        return ["Invalid parentheses"]
    
    return result