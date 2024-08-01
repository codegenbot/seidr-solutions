from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    stack = []
    
    for char in paren_string:
        if char == "(":
            stack.append("(")
            temp += char
        elif char == ")":
            stack.pop()
            temp += char
            if not stack:
                result.append(temp)
                temp = ""
    
    return result