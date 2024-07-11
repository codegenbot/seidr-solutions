````
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    result = []
    for char in paren_string:
        if char == '(':
            stack.append(1)
        elif char == ')':
            result.append(max(stack))
            stack.pop()
    return result
```