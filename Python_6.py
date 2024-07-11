```
from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string.split():
        nesting_level = 0
        for char in s:
            if char == '(':
                nesting_level += 1
            elif char == ')':
                nesting_level -= 1
        result.append(nesting_level)
    return result