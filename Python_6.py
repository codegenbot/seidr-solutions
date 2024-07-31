```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        nesting = 0
        max_nesting = 0
        for char in group:
            if char == '(':
                nesting += 1
                max_nesting = max(max_nesting, nesting)
            elif char == ')':
                nesting -= 1
        result.append(max_nesting)
    return result