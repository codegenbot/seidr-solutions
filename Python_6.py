from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    valid_input = True

    for char in paren_string:
        if char not in "()":
            valid_input = False
            continue

        if char == "(":
            current_depth += 1
            depths.append(current_depth)
        elif char == ")":
            if current_depth > 0:
                current_depth -= 1
            else:
                valid_input = False
                continue
            if current_depth < 0:
                valid_input = False
                continue
    
    if current_depth != 0 or not valid_input:
        return []

    return depths