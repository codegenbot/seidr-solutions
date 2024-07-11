```
from typing import List
import re


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for paren_group in paren_string.split():
        nesting_level = 0
        for char in paren_group:
            if char == '(':
                nesting_level += 1
            elif char == ')':
                nesting_level -= 1
        result.append(nesting_level)
    return result