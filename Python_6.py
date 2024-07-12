```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for group in paren_string.split():
        level = 0
        max_level = 0
        for char in group:
            if char == '(':
                level += 1
                stack.append(level)
            elif char == ')':
                level -= 1
                stack.pop()
            max_level = max(max_level, level)
        result.append(stack[-1] if stack else -1)
    return result