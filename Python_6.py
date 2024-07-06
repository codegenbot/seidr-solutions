```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = 0
    max_level = 0
    current_level = 0
    
    for char in paren_string:
        if char == '(':
            stack += 1
            current_level += 1
            max_level = max(max_level, current_level)
        elif char == ')':
            stack -= 1
            current_level -= 1
        
        if stack == 0 and current_level > 0:
            result.append(current_level - 1) # subtract one for the extra level at end
            current_level = 0
    
    if stack == 0:
        result.append(max_level)
    
    return result