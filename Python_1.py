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
            groups.append('(')
        elif char == ')':
            if len(stack) > 0 and stack[-1] == '(':
                stack.pop()
                groups.append(')')
            else:
                groups.pop()
    
    result = [group for group in groups]
    return result