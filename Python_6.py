from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    for char in paren_string:
        if char not in "()":
            continue
        
        if char == "(":
            current_depth += 1
            depths.append(current_depth)
        elif char == ")":
            if current_depth <= 0:
                return []
            
            current_depth -= 1
    
    depths.append(0)
    return depths