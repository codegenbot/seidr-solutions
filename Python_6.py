def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        deepest_level = current_level = 0
        for char in group:
            if char == "(":
                current_level += 1
                deepest_level = max(deepest_level, current_level)
            elif char == ")":
                current_level -= 1
        result.append(deepest_level)
    return result