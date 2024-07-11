```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        stack = 0
        max_level = 0
        for c in s:
            if c == '(':
                stack += 1
            elif c == ')':
                stack -= 1
            if stack > max_level:
                max_level = stack
        result.append(max_level)
    return result