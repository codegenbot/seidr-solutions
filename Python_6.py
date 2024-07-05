```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = 0
    max_level = 0
    
    for char in paren_string:
        if char == '(':
            stack += 1
            if stack > max_level:
                max_level = stack
        elif char == ')':
            stack -= 1
    
    for _ in range(max_level):
        result.append(0)
    
    return result