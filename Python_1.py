```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ''
    depth = 0
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            depth += 1
            group += char
        elif char == ')':
            depth -= 1
            group += char
        if depth == 0:
            groups.append(group)
            group = ''
    return groups