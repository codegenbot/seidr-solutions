def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        current_level = 0
        max_level = 0
        for char in group:
            if char == "(":
                current_level += 1
                max_level = max(max_level, current_level)
            elif char == ")":
                current_level -= 1
        result.append(max_level)
    return result