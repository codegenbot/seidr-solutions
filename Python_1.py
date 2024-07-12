```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    temp_str = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            temp_str += char
        elif char == ')':
            if not stack or stack.pop() != '(':
                raise ValueError("Invalid parentheses")
            temp_str += char
            result.append(temp_str)
            temp_str = ''
    
    return result