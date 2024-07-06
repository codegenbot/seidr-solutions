```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    groups = ''
    for char in paren_string:
        if char != ' ':
            if char == '(':
                groups += char
            elif char == ')':
                if groups.count('(') > groups.count(')'):
                    groups += char
                else:
                    result.append(groups)
                    groups = ''
    if groups:
        result.append(groups)
    return result