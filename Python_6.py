def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    depth = 0
    for char in paren_string:
        if char == "(":
            depth += 1
            depths.append(depth)
        elif char == ")":
            depth -= 1
    return [max(depths) if depths else 0 for depths in paren_string.split()]