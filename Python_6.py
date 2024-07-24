```
from typing import List
import re


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        levels = 0
        max_levels = 0
        for char in group:
            if char == '(':
                levels += 1
                max_levels = max(max_levels, levels)
            elif char == ')':
                levels -= 1
        result.append(max_levels)
    return result