def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in re.split(r'\(([^()]+)\)|\)', paren_string):
        if not group:
            continue
        current_depth = 0
        max_depth = 0
        for char in group:
            if char == '(':
                current_depth += 1
                max_depth = max(max_depth, current_depth)
            elif char == ')':
                current_depth -= 1
        result.append(max_depth)
    return result