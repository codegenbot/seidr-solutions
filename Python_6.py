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

# Take input from user
paren_string = input("Enter a string of nested parentheses: ")

# Print the result
print(parse_nested_parens(paren_string))