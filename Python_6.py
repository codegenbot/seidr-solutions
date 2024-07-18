from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    
    def calculate_depths(paren_string):
        nonlocal current_depth
        for char in paren_string:
            if char == "(":
                current_depth += 1
                depths.append(current_depth)
            elif char == ")" and current_depth > 0:
                current_depth -= 1
    
    calculate_depths(paren_string)
    
    return depths

parse_nested_parens("(())()((()))")