```Python
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    group_depths = []
    deepest = 0
    for char in paren_string:
        if char == '(' and level > 0:
            continue
        elif char == '(':
            level += 1
            if level > deepest:
                deepest = level
        elif char == ')':
            level -= 1
        if level == 0 and deepest > 0:
            result.append(deepest - 1)
            deepest = 0
    return result