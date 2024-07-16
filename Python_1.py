```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''
    
    for c in paren_string:
        if c == ' ':
            continue
        if c == '(':
            stack.append(c)
            current_group += c
        elif c == ')':
            if stack and stack[-1] == '(':
                stack.pop()
                current_group += c
                groups.append(current_group)
                current_group = ''
    
    return groups