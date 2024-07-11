```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        level = 0
        max_level = 0
        temp_result = []
        for char in group:
            if char == '(':
                level += 1
                temp_result.append(level)
            elif char == ')':
                level -= 1
                temp_result.append(level)
            max_level = max(max_level, level)
        result.append(max(temp_result))
    return result