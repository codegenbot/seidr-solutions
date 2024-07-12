```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = []
        max_depth = 0
        depth = 0
        for char in group:
            if char == '(':
                stack.append(char)
                depth += 1
                max_depth = max(max_depth, depth)
            elif char == ')':
                stack.pop()
                depth -= 1
        result.append(max_depth)
    return result