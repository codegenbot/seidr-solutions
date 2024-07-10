def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
            depths.append(current_depth)
        elif char == ")":
            current_depth -= 1
    return [
        max(depths[i:j])
        for i, j in zip(range(0, len(depths), 2), range(2, len(depths) + 1, 2))
    ]