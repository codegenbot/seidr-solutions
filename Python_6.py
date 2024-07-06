```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        depth = 0
        nested_depth = 0
        for char in group:
            if char == '(':
                depth += 1
                nested_depth = max(nested_depth, depth)
            elif char == ')':
                depth -= 1
                if depth > 0:
                    nested_depth = max(nested_depth, depth)
        result.append(nested_depth)
    return result