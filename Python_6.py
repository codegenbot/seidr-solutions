
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
            depths.append(current_depth)
        elif char == ")":
            if current_depth > 0:
                current_depth -= 1
            else:  # Reset current depth if encountered a ")" without corresponding "("
                current_depth = 0
                depths.append(0)
    return depths