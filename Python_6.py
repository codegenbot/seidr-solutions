```
from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    max_depth = 0
    current_depth = 0
    
    for char in paren_string:
        if char == '(':
            current_depth += 1
            max_depth = max(max_depth, current_depth)
        elif char == ')':
            current_depth -= 1
        
        if current_depth == 0 and paren_string.index(char) != len(paren_string) - 1:
            result.append(max_depth)
            max_depth = 0
    
    return result