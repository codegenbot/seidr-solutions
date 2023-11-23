def parse_nested_parens(paren_string: str) -> List[int]:
    max_depth = 0
    depths = []

    for char in paren_string:
        if char == '(':
            max_depth += 1
        elif char == ')':
            depths.append(max_depth)
            max_depth -= 1

    return depths