```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ''
    opened = 0
    for char in paren_string:
        if char == '(': 
            opened += 1
            group += '('
        elif char == ')':
            opened -= 1
            group += ')'
            if opened == 0:
                result.append(group)
                group = ''
        else: 
            continue
    return result