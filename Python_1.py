```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    current_group = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char in ['(', '[', '{']:
            stack.append(char)
            current_group += char
        elif char in [')', ']', '}']:
            while stack and stack[-1] != '(':
                current_group += stack.pop()
            if not stack or stack.pop() != '(':
                raise ValueError("Unbalanced parentheses")
            current_group += char
        else:
            raise ValueError("Invalid character")
    
    while stack:
        current_group += stack.pop()
    
    for i in range(len(paren_string)):
        if paren_string[i] == '(' and i < len(paren_string) - 1 and paren_string[i+1] == ')':
            result.append(current_group[:i+1])
            current_group = current_group[i+2:]
        elif paren_string[i] in ['(', '[', '{'] and i < len(paren_string) - 1 and paren_string[i+1] in [')', ']', '}']:
            stack.append('(')
            current_group += '('
    result.append(current_group)
    return result