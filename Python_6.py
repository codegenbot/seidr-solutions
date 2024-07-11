```
from typing import List
import re


def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    for group in paren_string.split():
        nesting_level = 0
        for char in group:
            if char == '(':
                nesting_level += 1
            elif char == ')':
                nesting_level -= 1
        levels.append(nesting_level)
    return levels