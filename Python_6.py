from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
        elif char == ")":
            current_depth -= 1
        levels.append(current_depth)
    return levels