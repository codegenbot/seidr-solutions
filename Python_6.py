```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = 0
        level = 0
        for char in group:
            if char == '(':
                stack += 1
            elif char == ')':
                stack -= 1
            if stack == 0:
                level = max(level, 2)
                result.append(level)
                break
    return result