Here is the completed code:

```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for paren in paren_string.split():
        nesting_level = 0
        for p in paren:
            if p == '(':
                stack.append(p)
                nesting_level += 1
            elif p == ')':
                stack.pop()
                nesting_level -= 1
        result.append(nesting_level)
    return result