```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            group += char
        elif char == ')':
            group += char
            while len(group) > 1 and group[-1] != '(':
                groups.append(group)
                group = ''
            if group:
                groups.append(group)
        else:
            group += char
    
    return groups