```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        level = 0
        nested_levels = [1]
        for char in group:
            if char == '(':
                level += 1
                nested_levels.append(level)
            elif char == ')':
                level -= 1
                nested_levels.pop()
        result.append(max(nested_levels))
    return result