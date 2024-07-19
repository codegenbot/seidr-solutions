```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    temp = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        elif char == '(':
            stack.append(char)
            temp += char
        elif char == ')':
            stack.pop()
            temp += char
            if not stack:
                groups.append(temp)
                temp = ''

    return groups