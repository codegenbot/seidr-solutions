from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
        elif char == ")":
            depths.append(current_depth)
            current_depth -= 1
    return depths