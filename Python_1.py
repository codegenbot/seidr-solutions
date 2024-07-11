```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    groups = ''
    
    for char in paren_string:
        if char != ' ' and (groups.endswith(')') or groups == ''):
            result.append(groups + ')')
            groups = '('
        elif char == '(':
            if groups == '':
                groups += '('
            else:
                groups += '(()'
        else:
            groups += char
    
    result.append(groups + ')')
    return result