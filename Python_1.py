```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ''

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            if not stack or stack.pop() != '(':
                raise ValueError("Unbalanced parentheses")
            group += char
            if not stack:
                groups.append(group)
                group = ''

    return groups