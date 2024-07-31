```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ''
    open_braces = 0
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            open_braces += 1
            current_group += '('
        elif char == ')':
            open_braces -= 1
            current_group += ')'
            if open_braces == 0:
                result.append(current_group)
                current_group = ''
    return result