from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    max_depth = 0
    current_depth = 0
    for char in paren_string:
        if char == '(':
            current_depth += 1
            max_depth = max(max_depth, current_depth)
        elif char == ')':
            current_depth -= 1
    return [max_depth]

input_string = input("Enter the string of nested parentheses: ")
result = parse_nested_parens(input_string)
print(result)