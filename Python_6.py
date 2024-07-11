from typing import List
import re

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in re.findall(r'\([^()]+?\)', paren_string):
        level = 0
        max_level = 0
        for char in group[1:-1]:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
            max_level = max(max_level, level)
        result.append(max_level)
    return result