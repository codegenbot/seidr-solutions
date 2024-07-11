```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    current_group = ''
    
    for c in paren_string:
        if c == ' ':
            continue
        if c == '(':
            stack.append(c)
            current_group += c
        elif c == ')':
            if stack:
                stack.pop()
                current_group += c
            else:
                groups.append(current_group + c)
                current_group = ''
    
    if stack:
        for _ in range(len(stack)):
            current_group += ')'
        groups.append(current_group)
    
    return [group.strip() for group in current_group.split('') if group]