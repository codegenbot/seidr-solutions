```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    deepest = 0
    group_depths = []
    for char in paren_string:
        if char == '(' and level > 0:
            continue
        elif char == '(':
            level += 1
            if level > deepest:
                deepest = level
                group_depths.append(deepest)
        elif char == ')':
            level -= 1
        if level == 0:
            result.append(deepest)
            deepest = 0
    return result