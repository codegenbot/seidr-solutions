```python
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while stack[-1] != '(':
                stack.pop()
            stack.pop()
            result.append(len(stack))
    return result