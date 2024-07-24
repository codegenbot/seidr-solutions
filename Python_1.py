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
            stack.append(char)
            group += char
        elif char == ')':
            while stack and stack[-1] != '(':
                group += stack.pop()
            if not stack or stack.pop() != '(':
                return []  # invalid parentheses
            group += char
    
    while stack:
        group += stack.pop()
    
    current_group = ''
    result = []
    
    for char in group:
        if char == '(':
            if current_group:
                result.append(current_group)
                current_group = ''
            current_group += char
        elif char == ')':
            current_group += char
        else:
            if current_group and current_group[0] == '(':
                if len(current_group) > 1 or current_group[1] != ' ':
                    return []  # invalid parentheses
                result.append('(' + current_group)
                current_group = ''
            elif current_group and current_group[-1] == ')':
                if len(current_group) > 2 or current_group[1:] != ' ':
                    return []  # invalid parentheses
                result.append(')' + current_group[:-1])
                current_group = ''
            else:
                current_group += char
    
    if current_group and (current_group[0] == '(' or current_group[-1] == ')'):
        return []  # invalid parentheses
    
    if current_group:
        result.append(current_group)
    
    return result