Here is the solution:

```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        depth = 0
        nested_depth = [0]
        for char in group:
            if char == '(':
                depth += 1
                nested_depth.append(depth)
            elif char == ')':
                depth -= 1
                if depth < 0:
                    break
        result.append(max(nested_depth))
    return result