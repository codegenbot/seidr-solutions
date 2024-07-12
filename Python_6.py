from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    max_depth = current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
            max_depth = max(max_depth, current_depth)
        elif char == ")":
            current_depth -= 1
        levels.append(max_depth)
    return levels

# Read input from the user
input_string = input("Enter the nested parenthesis string: ")
# Call the function with the input provided by the user
output = parse_nested_parens(input_string)
print(output)