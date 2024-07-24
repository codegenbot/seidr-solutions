```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = []

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            current_group.append(char)
        elif char == ')':
            stack.pop()
            current_group.append(char)
            if not stack:
                groups.append(''.join(current_group))
                current_group = []

    return groups