```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    curr_group = ''
    
    for char in paren_string:
        if char == '(':
            stack.append(char)
            curr_group += char
        elif char == ')':
            stack.pop()
            curr_group += char
            if not stack:
                result.append(curr_group)
                curr_group = ''
                
    return result