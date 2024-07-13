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
        max(depths[i : depths.index(0, i)])
        for i in range(0, len(depths), depths.index(0, i) + 1)
    ]