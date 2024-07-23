```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''

    for char in paren_string:
        if char == ' ': continue
        if char == '(':
            stack.append(char)
            if current_group:
                groups.append(current_group)
                current_group = ''
        elif char == ')':
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if stack: 
                stack.pop()  # remove the last '('
            groups.append(current_group)
            current_group = ''
    return [current_group] + groups