from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    depth = 0
    max_depth_for_current = 0

    for char in paren_string:
        if char == "(":
            depth += 1
            max_depth_for_current = max(max_depth_for_current, depth)
        elif char == ")":
            depth -= 1
            if depth == 0:
                result.append(max_depth_for_current)
                max_depth_for_current = 0
    
    return result