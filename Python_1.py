```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''
    
    for c in paren_string:
        if c == '(':
            stack.append(c)
            current_group += '('
        elif c == ')':
            stack.pop()
            current_group += ')'
            if not stack:
                groups.append(current_group)
                current_group = ''
    
    return groups