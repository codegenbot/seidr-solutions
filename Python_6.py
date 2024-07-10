```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        level = 0
        deepest = 0
        for char in group:
            if char == '(':
                level += 1
                deepest = max(deepest, level)
            elif char == ')':
                level -= 1
        result.append(deepest)
    return result