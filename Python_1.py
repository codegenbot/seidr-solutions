```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    groups = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            groups += '('
        elif char == ')':
            if groups.count('(') != groups.count(')'):
                return []
            groups += ')'
            result.append(groups)
            groups = ''
    
    if groups:
        return []
    
    return result