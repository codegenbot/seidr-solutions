```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ''
    
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
                current_group += stack.pop()
            else:
                result.append(current_group)
                current_group = ''
        else:
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if char == ')':
                current_group += char
                while stack and stack[-1] != '(':
                    current_group += stack.pop()
                stack.pop()
                result.append(current_group)
                current_group = ''
            else:
                current_group += char
    
    if stack:
        while stack:
            current_group += stack.pop()
        result.append(current_group)

    return [group for group in map(str, filter(bool, result))]