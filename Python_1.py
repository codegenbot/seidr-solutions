from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    stack = []
    
    for char in paren_string:
        if char == "(":
            stack.append(current_group)
            current_group = ""
        elif char == ")":
            if stack:
                group = stack.pop()
                group += current_group
                current_group = group
            else:
                result.append(current_group)
                current_group = ""
        else:
            current_group += char
    
    result.append(current_group)
    
    return result