```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp_str = ''
    is_open = False
    
    for char in paren_string:
        if char == ' ':
            continue
        elif char == '(':
            is_open = True
            temp_str += char
        elif char == ')':
            if is_open:
                temp_str += char
                result.append(temp_str)
                temp_str = ''
                is_open = False
            else:
                temp_str += char
    
    return result