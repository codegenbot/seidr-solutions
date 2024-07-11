```
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ''

    for c in paren_string:
        if c == ' ':
            continue
        if c == '(':
            stack.append(c)
            current_group += c
        elif c == ')':
            while stack and stack[-1] != '(':
                current_group += c
                stack.pop()
            if stack:
                current_group += c
                stack.pop()
            result.append(current_group)
            current_group = ''

    return result