```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    groups = ''
    for char in paren_string:
        if char == '(':
            if groups:
                result.append(groups)
                groups = ''
        elif char == ')':
            groups += ')'
        else:
            continue
        groups += char
    result.append(groups)
    return result