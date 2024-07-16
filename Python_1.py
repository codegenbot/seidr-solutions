```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ''
    level = 0
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            level += 1
            group += char
        elif char == ')':
            level -= 1
            group += char
        if level == 0:
            groups.append(group)
            group = ''
    return groups