from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    for char in paren_string:
        if char == '(':
            current_depth += 1
        elif char == ')':
            current_depth -= 1
        if current_depth < 0:
            return "Invalid nested parens string"
        if char in ['(', ')']:
            depths.append(current_depth)
    if current_depth != 0:
        return "Invalid nested parens string"
    return depths

input_string = input("Enter the nested parens string: ").strip()
if input_string:
    result = parse_nested_parens(input_string)
    if type(result) == list:
        print(result)
    else:
        print(result)
else:
    print("No input received. Please provide a valid nested parens string.")