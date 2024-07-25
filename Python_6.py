```
def parse_nested_parens(paren_string: str) -> int:
    max_depth = 0
    current_depth = 0
    for char in paren_string:
        if char == '(':
            current_depth += 1
        elif char == ')':
            current_depth -= 1
        max_depth = max(max_depth, current_depth)
    return max_depth