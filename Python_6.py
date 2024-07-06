```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    temp_level = 0
    for group in paren_string.split():
        level = 0
        max_level = 0
        for char in group:
            if char == '(':
                level += 1
                temp_level += 1
                if level > max_level:
                    max_level = level
            elif char == ')':
                level -= 1
                if level < 0:
                    result.append(temp_level)
                    temp_level = 0
        if level > 0:
            result.append(temp_level)
    return result