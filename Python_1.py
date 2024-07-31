```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    group = ''
    
    for char in paren_string:
        if char == '(':
            group += '('
        elif char == ')':
            group += ')'
            if group.count('(') == group.count(')'):
                result.append(group)
                group = ''
        else:
            continue

    return result