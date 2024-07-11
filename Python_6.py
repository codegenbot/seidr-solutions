````
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(1)
        elif char == ')':
            if stack:
                result.append(max(stack))
                stack.pop()
    return [max(stack)] if stack else result
```