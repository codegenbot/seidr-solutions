```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    result = []
    groups = []

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                stack.pop()
            if stack:
                stack.pop()
                groups.append(''.join(stack))
            else:
                groups.append('()')

    return groups