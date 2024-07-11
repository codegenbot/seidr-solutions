```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
        elif char == ')':
            group = ''
            while stack and stack[-1] != '(':
                group += stack.pop()
            stack.pop()  # Remove the opening parenthesis
            groups.append('(' + group + ')')
    return groups