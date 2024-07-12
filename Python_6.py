Here is the Python solution:

```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        stack = 0
        max_depth = 0
        for c in s:
            if c == '(':
                stack += 1
                max_depth = max(max_depth, stack)
            elif c == ')':
                stack -= 1
        result.append(max_depth)
    return result