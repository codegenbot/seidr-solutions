```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    temp_str = ''
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
            temp_str += char
        elif char == ')':
            if stack:
                stack.pop()
                temp_str += char
                result.append(temp_str + char)
                temp_str = ''
            else:
                return []
    return result