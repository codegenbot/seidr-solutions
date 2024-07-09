```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            stack.pop()
            group += char
            if not stack:
                while group and group[-1] != '(':
                    group = group[:-1]
                groups.append(group[1:-1])
                group = ''

    return [group for group in groups if group]