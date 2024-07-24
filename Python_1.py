```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        elif char == '(':
            current_group += char
        elif char == ')':
            current_group += char
            while current_group and current_group[-1] != '(':
                result.append(current_group)
                current_group = ''
    
    if current_group:
        result.append(current_group)
    
    return result