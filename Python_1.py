```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ''
    nesting_level = 0
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            nesting_level += 1
            current_group += char
        elif char == ')':
            nesting_level -= 1
            current_group += char
            if nesting_level == 0:
                result.append(current_group)
                current_group = ''
    return result