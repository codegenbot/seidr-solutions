```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    current_group = ''
    opened = 0
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            opened += 1
            current_group += '('
        elif char == ')':
            opened -= 1
            current_group += ')'
            if opened == 0:
                groups.append(current_group)
                current_group = ''
    return groups