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
            if stack:
                stack.pop()
                groups.append(')')
            else:
                groups.append(')')
                result.append(''.join(groups))
                groups = ['(']
    
    if stack:
        for _ in range(len(stack)):
            groups.append(')')
        result.append(''.join(groups))
    else:
        result.append(''.join(groups))
    
    return result