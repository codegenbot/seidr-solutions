```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    result = []
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack:
                stack.pop()
            else:
                groups.append(''.join(stack + [char]))
                stack = []

    result.append(''.join(stack))
    return [g for g in groups if len(g) > 1] + [result[0]]