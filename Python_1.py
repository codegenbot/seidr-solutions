```python
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp_str = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        
        if char == '(':
            temp_str += char
        elif char == ')':
            if temp_str and temp_str[-1] == '(':
                temp_str += char
                result.append(temp_str)
                temp_str = ''
            else:
                temp_str += char
    
    if temp_str:
        result.append(temp_str)
    
    return result