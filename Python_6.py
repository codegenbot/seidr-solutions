Here is the Python solution:

```python
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        level = 0
        for char in s:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
        result.append(level)
    return result