```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = []
    
    for char in paren_string:
        if char == ' ':
            continue
        if char not in ['(', ')']:
            raise ValueError("Invalid character")
        
        if char == '(':
            stack.append(char)
            groups.append('(')
        elif char == ')':
            stack.pop()
            groups.append(')')
        
        if not stack:
            result.append(''.join(groups))
            groups = []
    
    if groups:
        result.append(''.join(groups))
    
    # Check for remaining characters in the stack
    if stack:
        result.append('(' + ''.join(stack) + ')')
    
    return [group for group in result if group]