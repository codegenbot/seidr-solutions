from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ""
    
    for char in paren_string:
        if char == "(":
            stack.append("(")
        elif char == ")":
            if stack:
                stack.pop()
            else:
                result.append(current_group)
                current_group = ""
                continue
        
        current_group += char
        
        if not stack:
            result.append(current_group)
            current_group = ""
    
    return result