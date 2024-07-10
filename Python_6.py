from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    for char in paren_string:
        if char not in ['(', ')']:
            return "Invalid characters in nested parens string"
        if char == '(':
            current_depth += 1
        elif char == ')':
            current_depth -= 1
        if current_depth < 0:
            return "Invalid nested parens string"
    depths.append(current_depth)
    if current_depth != 0:
        return "Invalid nested parens string"

input_string = "((())())"
print(parse_nested_parens(input_string))