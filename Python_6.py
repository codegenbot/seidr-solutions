def parse_nested_parens(paren_string: str) -> int:
    max_level = 0
    current_level = 0
    for char in paren_string:
        if char == "(":
            current_level += 1
        elif char == ")":
            current_level -= 1
        max_level = max(max_level, current_level)
    return max_level