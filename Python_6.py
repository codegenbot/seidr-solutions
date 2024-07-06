````
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    max_level = 0
    for char in paren_string:
        if char == "(":
            level += 1
            if level > max_level:
                max_level = level
        elif char == ")":
            level -= 1
    for _ in range(max_level):
        result.append(max_level)
    return result