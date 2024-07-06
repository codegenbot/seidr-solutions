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
            while len(stack) > 0 and stack[-1] != '(':
                stack.pop()
            if len(stack) == 0:
                groups.append(''.join(result))
                result = []
            else:
                stack.pop()

    if len(stack) > 0:
        raise ValueError("Unclosed parentheses")

    return [group + ''.join(result) for group in groups]