```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp_str = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        elif char == '(':
            stack.append(char)
            temp_str += char
        elif char == ')':
            stack.pop()
            temp_str += char
            if not stack:
                result.append(temp_str)
                temp_str = ''
    
    return result