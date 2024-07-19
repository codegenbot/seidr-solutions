```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp_str = ''
    balance_count = 0
    
    for char in paren_string:
        if char == ' ':
            continue
        elif char == '(':
            balance_count += 1
            temp_str += char
        elif char == ')':
            balance_count -= 1
            temp_str += char
            if balance_count == 0:
                result.append(temp_str)
                temp_str = ''
                
    return result