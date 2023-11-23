def parse_nested_parens(paren_string: str) -> List[int]:
    depth = 0
    max_depth = 0
    result = []
    
    for char in paren_string:
        if char == '(':
            depth += 1
            max_depth = max(max_depth, depth)
        elif char == ')':
            depth -= 1
        elif char == ' ':
            result.append(max_depth)
            max_depth = 0
    
    result.append(max_depth)
    return result