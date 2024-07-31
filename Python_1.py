```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    temp_group = ''
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            temp_group += '('
        elif char == ')':
            if len(temp_group) > 0 and temp_group[-1] == '(':
                temp_group += ')'
            else:
                result.append(temp_group)
                temp_group = ''
    if temp_group:
        result.append(temp_group)
    return result