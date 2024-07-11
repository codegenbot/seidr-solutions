```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    groups = ''
    for char in paren_string:
        if char == ' ':
            continue
        if char in ['(', ')']:
            groups += char
            if len(groups) * (groups[0] == '(') % 2 == 1:
                result.append(groups)
                groups = ''
        else:
            raise ValueError("Invalid input. Only parentheses and spaces are allowed.")
    return result