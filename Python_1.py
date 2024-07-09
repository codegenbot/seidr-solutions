from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    stack = []
    
    for char in paren_string:
        temp += char
        
        if char == "(":
            stack.append("(")
        elif char == ")":
            stack.pop()
            if not stack:
                result.append(temp)
                temp = ""
    
    return result