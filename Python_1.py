```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ''
    for char in paren_string:
        if char == ' ':
            continue
        group += char
        if group[0] == '(' and group[-1] == ')':
            result.append(group)
            group = ''
    return result