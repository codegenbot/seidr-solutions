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
            stack.append('(')
            group += '('
        elif char == ')':
            while stack and stack[-1] != '(':
                group += stack.pop()
            if not stack or stack[-1] == '(':
                groups.append(group + ')')
                group = ''
            else:
                stack.pop()
        else:
            while stack and stack[-1] != '(':
                group += stack.pop()
            if stack:
                stack.pop()
            group += char
    return groups