def parse_nested_parens(paren_string: str) -> list[int]:
    max_depth = 0
    curr_depth = 0
    for char in paren_string:
        if char == '(':
            curr_depth += 1
            max_depth = max(max_depth, curr_depth)
        elif char == ')':
            curr_depth -= 1
    return [max_depth]