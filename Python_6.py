from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    for char in paren_string:
        if char == '(':
            current_depth += 1
        elif char == ')':
            current_depth -= 1
        if char in ['(', ')'] and current_depth >= 0:
            depths.append(current_depth)
        else:
            return "Invalid nested parens string"
    return depths

input_string = input().strip()
result = parse_nested_parens(input_string)
if type(result) == list:
    print(result)
else:
    print(result)