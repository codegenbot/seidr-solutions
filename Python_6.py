```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    group_level = 0
    for char in paren_string:
        if char == '(':
            if group_level > 0:
                result.append(1)
            else:
                result.append(2)
            group_level += 1
        elif char == ')':
            result.append(-2)
            group_level -= 1
    return result