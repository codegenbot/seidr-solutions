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
        else:
            while stack and stack[-1] != '(':
                group += char
                stack.pop()
            if stack:
                group += char
                stack.pop()
            else:
                group += char

    return groups