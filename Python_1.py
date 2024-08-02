from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp = ""
    stack = []
    
    for char in paren_string:
        if char == "(":
            stack.append(temp)
            temp = ""
        elif char == ")":
            result.append(stack.pop() + temp)
            temp = ""
        else:
            temp += char
            
    return result