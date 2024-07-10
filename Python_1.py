```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    result = []

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack and stack[-1] != '(':
                stack.pop()
            if stack:
                group = ''.join(stack + [char])
                groups.append(group)
                stack.clear()

    result.extend(groups)

    return result