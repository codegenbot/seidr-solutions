```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = []
    group = ''
    count = 0
    for char in paren_string:
        if char == '(': 
            count += 1
            group += '('
        elif char == ')': 
            count -= 1
            group += ')'
            if count == 0: 
                groups.append(group)
                group = ''
    return groups