```
from typing import List
stack = []
result = []

def parse_nested_parens(paren_string: str) -> List[int]:
    for char in paren_string.split():
        if char == '(': 
            stack.append(1)
        elif char == ')':
            level = stack.pop()
            result.append(level)
    return result