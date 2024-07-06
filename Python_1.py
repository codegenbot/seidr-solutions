```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''
    
    for char in paren_string:
        if char == '(':  # Opening parenthesis
            stack.append(char)
            current_group += char
        elif char == ')':  # Closing parenthesis
            stack.append(char)
            current_group += char
            while stack and stack.pop() == '(':
                current_group = current_group[:-1]
        elif not stack:  # No open parentheses, start a new group
            groups.append(current_group)
            current_group = ''
    
    if current_group:
        groups.append(current_group)
    
    return [group for group in groups if group]