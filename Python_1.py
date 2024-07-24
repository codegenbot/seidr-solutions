```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                group += stack.pop()
            if not stack or stack.pop() != '(':
                return []  # invalid parentheses
            group += char
    
    while stack:
        group += stack.pop()
    
    current_group = ''
    result = []
    
    for char in group:
        if char == '(':
            if current_group:
                result.append(current_group)
                current_group = ''
            current_group += char
        elif char == ')':
            current_group += char
        else:
            if current_group:
                result.append(current_group)
                current_group = ''
            current_group += char
    
    if current_group:
        result.append(current_group)
    
    return result