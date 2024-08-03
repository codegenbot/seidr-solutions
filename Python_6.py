```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    def find_max_depth(s):
        max_depth = 0
        current_depth = 0
        for char in s:
            if char == '(':
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif char == ')':
                current_depth -= 1
        return max_depth

    result = []
    groups = paren_string.split()
    for group in groups:
        result.append(find_max_depth(group))
    return result