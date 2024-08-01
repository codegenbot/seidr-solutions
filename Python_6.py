from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    paren_string = paren_string.strip()
    depths = []
    current_depth = 0

    for char in paren_string:
        if char == "(":
            current_depth += 1
        if char == ")":
            depths.append(current_depth)
            current_depth -= 1

    return depths