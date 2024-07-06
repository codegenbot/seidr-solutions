```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ''
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            group += char
        elif char == ')':
            group += char
            if group.count('(') == group.count(')'):
                groups.append(group)
                group = ''
    return groups