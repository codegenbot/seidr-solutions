```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp_str = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            temp_str += char
        elif char == ')':
            if not stack or stack.pop() != '(':
                return []  # invalid parentheses group
            temp_str += char
            result.append(temp_str)
            temp_str = ''
    
    if stack:  # unbalanced parentheses at the end of string
        return []
    
    return result