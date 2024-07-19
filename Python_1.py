```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''
    
    for paren in paren_string:
        if paren.isspace():
            continue
        if paren == '(':
            stack.append(paren)
            current_group += paren
        elif paren == ')':
            stack.pop()
            current_group += paren
            if not stack:
                groups.append(current_group)
                current_group = ''
    
    return groups