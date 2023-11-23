def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    depth = 0
    for char in paren_string:
        if char == '(':
            depth += 1
        elif char == ')':
            depth -= 1
        elif char == ' ':
            result.append(depth)
    return result