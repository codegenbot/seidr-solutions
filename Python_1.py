```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack:
                stack.pop()
            else:
                groups.append(''.join(stack))
                result.append(''.join(stack + [char]))
                stack = []
    
    if stack:
        groups.append(''.join(stack))
        result.append(''.join(stack + ['']))  # Add the last group with a closing parenthesis
    
    return result