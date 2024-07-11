````
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    levels = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
            levels.append(len(stack))
        elif char == ')':
            stack.pop()
            levels.append(len(stack))
    return levels
```