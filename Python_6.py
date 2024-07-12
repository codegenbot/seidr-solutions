from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    groups = paren_string.split()
    for group in groups:
        max_depth = current_depth = 0
        for char in group:
            if char == "(":
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif char == ")":
                current_depth -= 1
        levels.append(max_depth)
    return levels