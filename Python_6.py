from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    if any(char not in ["(", ")"] for char in paren_string):
        return "Invalid nested parens string"
    for char in paren_string:
        if char == "(":
            current_depth += 1
        elif char == ")":
            current_depth -= 1
        if current_depth < 0:
            return "Invalid nested parens string"
        depths.append(current_depth)
    if current_depth != 0:
        return "Invalid nested parens string"
    return depths

input_string = raw_input("Enter the nested parens string: ")
while not input_string or input_string.count("(") != input_string.count(")"):
    input_string = raw_input("Please enter a valid nested parens string: ")
result = parse_nested_parens(input_string)
print(result)