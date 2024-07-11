```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        level = 0
        max_level = 0
        inside_group = False
        for char in group:
            if char == '(' and not inside_group:
                level += 1
                inside_group = True
            elif char == ')':
                if inside_group:
                    level -= 1
                    if level == 0:
                        inside_group = False
            max_level = max(max_level, level)
        result.append(max_level)
    return result