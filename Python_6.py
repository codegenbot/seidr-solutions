from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    max_depth = 0
    current_depth = 0
    total_count = 0  # Added variable
    
    for char in paren_string:
        if char == '(':
            current_depth += 1
            max_depth = max(max_depth, current_depth)
            total_count += 1  # Increment total count
        elif char == ')':
            current_depth -= 1
    
    return [max_depth, total_count]  # Return both max depth and total count

# Take input from user
paren_string = input("Enter a string of nested parentheses: ")

# Print the result
print(parse_nested_parens(paren_string))