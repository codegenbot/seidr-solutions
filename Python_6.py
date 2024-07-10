```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    depth = 0
    max_depth = 0
    for char in paren_string:
        if char == '(':
            depth += 1
            max_depth = max(max_depth, depth)
        elif char == ')':
            depth -= 1
    while depth > 0:
        result.append(max_depth)
        depth -= 1
    return result