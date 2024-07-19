```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char in ['(', '[']:
            stack.append(char)
            current_group += char
        elif char in [')', ']']:
            if not stack or (stack[-1] != '(' and stack[-1] != '['):
                return []
            top = stack.pop()
            current_group += char
            if top == '(':
                result.append(current_group.strip('()'))
        else:
            return []
    
    while stack:
        top = stack.pop()
        if top == '(':
            result.append(current_group.strip('()'))
        elif top == '[':
            raise ValueError("Unbalanced brackets")
    
    return result