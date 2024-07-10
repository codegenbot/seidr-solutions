def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    max_depth = 0
    curr_depth = 0

    for char in paren_string:
        if char == "(":
            curr_depth += 1
            max_depth = max(max_depth, curr_depth)
        elif char == ")":
            curr_depth -= 1
        elif char == " ":
            depths.append(max_depth)
            max_depth = 0
            curr_depth = 0

    depths.append(max_depth)

    return depths