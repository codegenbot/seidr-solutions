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
            if stack and stack[-1] == '(':
                stack.pop()
                temp_str += char
                result.append(temp_str)
                temp_str = ''
            else:
                return []  # unmatched closing parenthesis

    if stack:  # unmatched opening parenthesis
        return []
    
    return [temp_str] if not stack else result