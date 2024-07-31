```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            current_group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                result.append(current_group)
                current_group = ''
                stack.pop()
            if stack:
                stack.pop()
                current_group += char
            else:
                raise ValueError("Unbalanced parentheses")
    
    if stack:
        raise ValueError("Unbalanced parentheses")
    result.append(current_group)
    
    return result