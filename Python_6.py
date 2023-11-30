from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    max_depth = 0
    current_depth = 0
    for char in paren_string:
        if char == '(':
            stack.append(char)
            current_depth += 1
            max_depth = max(max_depth, current_depth)
        elif char == ')':
            stack.pop()
            current_depth -= 1
    result.append(max_depth)
    return result