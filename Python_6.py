```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    nesting_level = 0
    for char in paren_string:
        if char == '(':
            nesting_level += 1
        elif char == ')':
            nesting_level -= 1
        if nesting_level > len(result):
            result.append(0)
        result[-1] = max(result[-1], nesting_level + 1)
    return result