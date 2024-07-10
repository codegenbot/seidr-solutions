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
            return "Invalid input: Unbalanced parentheses"
        depths.append(current_depth)
    if current_depth != 0:
        return "Invalid input: Unbalanced parentheses"
    return depths

input_string = input("Enter the string of nested parentheses: ")
if set(input_string) != {'(', ')'}:
    print("Invalid input: Input should consist of only '(' and ')' characters.")
else:
    result = parse_nested_parens(input_string)
    print(result)