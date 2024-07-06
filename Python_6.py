Here is the solution for the given problem:

```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    temp = 0
    for s in paren_string.split():
        count = 0
        for c in s:
            if c == '(':
                count += 1
            elif c == ')':
                count -= 1
            if count < 0:
                break
        result.append(count)
    return result