```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    nested_count = 0
    for char in paren_string:
        if char == '(':
            nested_count += 1
            result.append(nested_count)
        elif char == ')':
            nested_count -= 1
            result.append(nested_count)
    return result