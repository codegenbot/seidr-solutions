```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    stack = []
    group = ''
    
    for c in paren_string:
        if c == ' ':
            continue
        if c == '(':
            stack.append(c)
            group += c
        elif c == ')':
            stack.pop()
            group += c
            if not stack:
                groups.append(group)
                group = ''

    return groups