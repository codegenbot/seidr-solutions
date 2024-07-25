def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    max_depth = 0
    depth = 0

    for char in paren_string:
        if char == "(":
            depth += 1
            max_depth = max(max_depth, depth)
        elif char == ")":
            depth -= 1

    result.append(max_depth)

    return result