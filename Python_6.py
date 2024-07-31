```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        stack = []
        max_depth = 0
        for c in s:
            if c == '(':
                stack.append(1)
                max_depth = max(max_depth, len(stack))
            elif c == ')':
                stack.pop()
        result.append(max_depth)
    return result