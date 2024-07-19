```
from typing import List
import re

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        stack = 0
        level = 1
        max_level = 1
        for char in group:
            if char == '(':
                stack += 1
                if stack > level:
                    level += 1
                    max_level = level
            elif char == ')':
                stack -= 1
                if stack < level - 1:
                    break
            else:
                continue
        result.append(max_level)
    return result