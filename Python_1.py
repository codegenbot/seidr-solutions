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
            while stack and stack[-1] != '(':
                group += stack.pop()
            if stack:
                group += stack.pop() + char
            else:
                groups.append(group)
                group = ''
        else:
            group += char
    
    if stack:
        for _ in range(stack.pop()):
            group += ')'
        groups.append(group)
    
    return [group] if not groups else groups