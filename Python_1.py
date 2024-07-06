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
            stack.pop()
            group += char
            if not stack:
                groups.append(group)
                group = ''
        elif char != '\n' and stack and stack[-1] == '(':
            while stack and stack[-1] != '(':
                group += stack.pop()
    return groups