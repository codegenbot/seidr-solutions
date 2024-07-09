```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        elif char == '(':
            stack.append(char)
            current_group += char
        elif char == ')':
            if not stack or stack.pop() != '(':
                raise ValueError('Invalid parentheses')
            current_group += char
            while stack and stack.pop() != '(':
                pass
            result.append(current_group)
            current_group = ''
    
    return result