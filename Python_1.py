```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
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
                group += char
                stack.pop()
            if stack:
                stack.pop()
            group += char
            result.append(group)
            group = ''
    
    return result