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

paren_string = input("Enter the string with nested parentheses: ")
result = parse_nested_parens(paren_string)
print(result)