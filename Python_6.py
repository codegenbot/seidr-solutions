Here's the modified code:

```python
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = 0
    max_level = 0
    for c in paren_string:
        if c == '(':
            stack += 1
        elif c == ')':
            stack -= 1
        if stack > max_level:
            max_level = stack
    result.append(max_level)
    return result