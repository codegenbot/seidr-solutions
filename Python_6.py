```python
from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(1)
        elif char == ')':
            level = 0
            while stack and stack[-1] != 1:
                level += 1
                stack.pop()
            if stack:
                result.append(level + 1)
                stack.pop()
    return result