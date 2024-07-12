from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    temp_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            temp_group += char
        elif char == ')':
            stack.pop()
            temp_group += char
            if not stack:
                groups.append(temp_group)
                temp_group = ''
    
    return groups