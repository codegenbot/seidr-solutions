from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    paren_count = 0
    
    for char in paren_string:
        if char == "(":
            if paren_count > 0:
                current_group += char
            paren_count += 1
        elif char == ")":
            paren_count -= 1
            if paren_count > 0:
                current_group += char
                
            if paren_count == 0:
                result.append(current_group)
                current_group = ""
    
    return result