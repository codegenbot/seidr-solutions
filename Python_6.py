```
from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    nested_levels = []
    for char in paren_string:
        if char == '(':
            level += 1
            nested_levels.append(level)
        elif char == ')':
            level -= 1
        if level < 0:
            break
    return nested_levels