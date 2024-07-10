```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        stack = []
        max_depth = 0
        for c in s:
            if c == '(':
                stack.append(c)
            elif c == ')':
                if stack:
                    stack.pop()
                    max_depth = max(max_depth, len(stack))
        result.append(max_depth)
    return result