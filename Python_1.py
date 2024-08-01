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
            if not stack:
                raise Exception("Unbalanced parentheses")
            stack.pop()
            if not stack:
                groups.append(''.join(stack) + char)
            else:
                result.append(''.join(stack) + char)

    return [group for group in map(str, groups)]