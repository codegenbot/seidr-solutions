```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    num_open = 0
    deepest_level = 0
    current_level = 0
    
    for char in paren_string:
        if char == '(':
            num_open += 1
            current_level += 1
            if current_level > deepest_level:
                deepest_level = current_level
        elif char == ')':
            num_open -= 1
            current_level -= 1
        if num_open == 0:
            result.append(deepest_level)
            deepest_level = 0
    return result