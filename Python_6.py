def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    max_level = 0
    for char in paren_string:
        if char == "(":
            level += 1
            max_level = max(max_level, level)
        elif char == ")":
            level -= 1
        if level > max_level:
            max_level = level
    result.append(max_level)
    return [0] + [level + 1 for level in range(result[0], -1, -1)]