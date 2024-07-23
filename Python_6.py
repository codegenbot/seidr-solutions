```Python
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == '(':
            level += 1
        elif char == ')':
            while level > 1:
                result.append(level)
                level -= 1
            level -= 1
    return result