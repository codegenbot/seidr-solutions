from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    max_nesting = 0
    current_nesting = 0
    for char in paren_string:
        if char == '(':
            current_nesting += 1
            max_nesting = max(max_nesting, current_nesting)
        elif char == ')':
            current_nesting -= 1
    result.append(max_nesting)
    return result