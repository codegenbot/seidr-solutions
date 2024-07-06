import re
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in re.split(r'\(([^()]+)\)|\)', paren_string):
        if not group:
            continue
        depth = 0
        nested_depth = 0
        for char in group:
            if char == '(':
                depth += 1
                nested_depth = max(nested_depth, depth)
            elif char == ')':
                depth -= 1
        result.append(nested_depth)
    return result