```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char in ['(', ')']:
            if not stack or stack[-1] != '(' and char != ')':
                current_group += char
            else:
                while stack and stack[-1] != '(':
                    current_group += stack.pop()
                if stack and stack[-1] == '(':
                    stack.pop()
                    current_group += '(' + char
                else:
                    current_group += char
        else:
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if not stack or stack[-1] != '(':
                current_group = '(' + current_group + ')'
                result.append(current_group)
                current_group = ''
            else:
                stack.pop()
                current_group += char
        stack.extend(list(reversed(current_group)))
        current_group = ''

    while stack:
        current_group += stack.pop()

    if current_group:
        result.append(current_group)

    return result