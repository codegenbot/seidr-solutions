```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        nesting_level = 0
        level = 0
        for char in group:
            if char == '(':
                level += 1
                nesting_level = max(nesting_level, level)
            elif char == ')':
                level -= 1
        result.append(nesting_level)
    return result