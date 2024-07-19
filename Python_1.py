```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ''
    is_opening = True
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(' and is_opening:
            current_group += '('
            is_opening = False
        elif char == ')' and not is_opening:
            current_group += ')'
            result.append(current_group)
            current_group = ''
            is_opening = True
        else:
            current_group += char
    return result