```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ''
    stack = []

    for char in paren_string:
        if char == ' ':
            continue
        elif char == '(':
            stack.append(char)
            current_group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if stack:
                stack.pop()
            result.append(current_group + char)
            current_group = ''

    return result