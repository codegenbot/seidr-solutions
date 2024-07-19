def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    max_depth = 0
    current_depth = 0

    for char in paren_string:
        if char == "(":
            current_depth += 1
            max_depth = max(max_depth, current_depth)
        elif char == ")":
            current_depth -= 1

        if char == " ":
            depths.append(max_depth)
            max_depth = 0

    depths.append(max_depth)

    return depths