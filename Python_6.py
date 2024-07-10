Here is the completed code:

```
from typing import List
stack = []

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for paren in paren_string.split():
        level = 0
        for p in paren:
            if p == '(':
                stack.append(p)
                level += 1
            elif p == ')':
                stack.pop()
                level -= 1
        result.append(level)
    return result