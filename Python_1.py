```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            current_group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if not stack:
                groups.append(current_group[:-1])
                current_group = ''
            else:
                stack.pop()  # match the last '(' with this ')'
                current_group += char
        else:
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if not stack:
                groups.append(current_group)
                current_group = ''
            else:
                stack.pop()  # match the last '(' with this ')'
                current_group += char
    if stack:
        while stack:
            current_group += stack.pop()
        groups.append(current_group)
    
    return [group[1:-1] for group in groups]