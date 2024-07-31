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
            while stack and stack[-1] != '(':
                groups.append(')')
                stack.pop()
            if stack:
                stack.pop()
    
    result.append(''.join(groups))
    return [result[0]]