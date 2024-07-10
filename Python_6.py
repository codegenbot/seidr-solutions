```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = []
        max_depth = 0
        for char in group:
            if char == '(':
                stack.append(char)
            elif char == ')':
                if stack:
                    stack.pop()
                    max_depth = max(max_depth, len(stack))
        result.append(max_depth)
    return result