```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ''
    open_count = 0
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            open_count += 1
            group += char
        elif char == ')':
            open_count -= 1
            group += char
        if open_count == 0:
            groups.append(group)
            group = ''
    return groups