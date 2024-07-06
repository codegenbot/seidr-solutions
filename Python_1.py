from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    stack = []
    groups = []
    group = ''
    is_valid_input = True

    for char in paren_string:
        if char == ' ':
            continue
        if char == '(':
            stack.append(char)
            group += char
        elif char == ')':
            stack.pop()
            group += char
            if not stack:
                groups.append(group)
                group = ''
    
    if stack:  # If stack is not empty, input is invalid
        is_valid_input = False
    
    return [] if not is_valid_input else groups