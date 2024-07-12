Here is the Python solution for the problem:

```python
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
        
    result.append(max_depth)
    
    groups = paren_string.split()
    for group in groups:
        max_depth = 0
        current_depth = 0
        
        for char in group:
            if char == '(':
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif char == ')':
                current_depth -= 1
        
        result.append(max_depth)
    
    return result