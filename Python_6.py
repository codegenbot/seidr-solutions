Here is the solution to the problem:

```Python
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        depth = 0
        nesting = []
        for char in group:
            if char == '(':
                depth += 1
                nesting.append(depth)
            elif char == ')':
                depth -= 1
                if depth < 0:
                    break
        result.append(max(nesting))
    return result