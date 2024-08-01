```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(1)
        elif char == ')':
            stack.pop()
    max_level = len(stack)
    result.append(max_level)
    return [max_level]