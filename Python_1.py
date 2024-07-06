```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            current_group += char
        elif char == ')':
            if current_group.count('(') > current_group.count(')'):
                return []  # Not balanced parentheses
            current_group += char
            groups.append(current_group)
            current_group = ''
    
    if current_group:
        groups.append(current_group)
    
    return groups