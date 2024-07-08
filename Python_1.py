```
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    """Solves the problem of separating strings containing parentheses into groups.
    Each group starts with an open parenthesis and ends with a close parenthesis.
    If there is no corresponding close parenthesis, it will be included in the last group."""
    
    result = []
    current_group = ''
    
    for char in paren_string + '):':  # Add ')': at the end to ensure proper closing
        if char.isspace():
            continue
        elif char == '(':
            current_group += char
        elif char == ')':
            if len(current_group) > 0 and current_group[-1] == '(':
                result.append(current_group)
                current_group = ''
            else:
                current_group += char
    
    return result