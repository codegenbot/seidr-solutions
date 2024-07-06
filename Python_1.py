from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = ''
    
    for char in paren_string:
        if char == ' ':
            continue
        if char not in ['(', ')']:
            raise ValueError("Invalid character")
        
        if char == '(':
            stack.append(char)
            groups += '('
        elif char == ')':
            stack.pop()
            groups += ')'
        
        if not stack:
            result.append(groups.strip())
            groups = ''
    
    if groups:
        result.append(groups.strip())
    
    # Check for remaining characters in the stack
    if stack:
        result.append('(' + ''.join(stack) + ')')
    
    return [group for group in result if group]