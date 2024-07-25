def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    current_level = 0
    for char in paren_string:
        if char == "(":
            current_level += 1
            levels.append(current_level)
        elif char == ")":
            current_level -= 1
    return levels