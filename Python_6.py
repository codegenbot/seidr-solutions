from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0

    for char in paren_string:
        if char == "(":
            current_depth += 1
            depths.append(current_depth)
        elif char == ")" and current_depth > 0:
            current_depth -= 1

    return depths


# Read input from user
user_input = input()

# Call the function with user input
print(parse_nested_parens(user_input))