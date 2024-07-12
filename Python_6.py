from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    max_depth = current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
            max_depth = max(max_depth, current_depth)
        elif char == ")":
            if current_depth == 0:  # Check for invalid nesting
                return "Invalid input: Not a valid nested parentheses string"
            current_depth -= 1
        levels.append(max_depth)
    
    if current_depth != 0:  # Check for invalid nesting
        return "Invalid input: Not a valid nested parentheses string"
    return levels

paren_string = input("Enter nested parentheses string: ")
print(parse_nested_parens(paren_string))