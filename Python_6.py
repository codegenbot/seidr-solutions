```
from typing import List
import re


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        levels = 0
        stack = []
        for char in group:
            if char == '(':
                stack.append(char)
                levels += 1
            elif char == ')':
                stack.pop()
                if not stack:
                    levels -= 1
        result.append(levels)
    return result