from typing import List
def parse_nested_parens(paren_string: str) -> List[int]:
    depth = 0
    max_depth = 0
    for char in paren_string:
        if char == '(':
            depth += 1
            max_depth = max(max_depth, depth)
        elif char == ')':
            depth -= 1
    return [max_depth]