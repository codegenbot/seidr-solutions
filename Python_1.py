```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    if paren_string.startswith('(\n') and paren_string.endswith(')\n'):
        return [paren_string[2:-3]]

    stack = []
    groups = []
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
                if stack[-1] == ')':  # Check if stack ends with ')' before popping
                    current_group += stack.pop()  # Add this line
                else:
                    break  # If not, there's a mismatched parenthesis
            groups.append(current_group)
            current_group = ''

    if stack:
        while stack:
            current_group += stack.pop()
        if not stack: 
            groups.append(current_group)

    return groups