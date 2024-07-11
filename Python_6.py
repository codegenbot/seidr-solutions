```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        depth = 0
        for char in group:
            if char == '(':
                depth += 1
            elif char == ')':
                depth -= 1
            if depth < 0:
                break
        result.append(depth)
    return result