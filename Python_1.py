```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            if stack and stack[-1] == '(':
                stack.pop()
                group += char
                groups.append(group)
                group = ''
    
    return groups