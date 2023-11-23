def parse_nested_parens(paren_string: str) -> List[int]:
    nested_levels = []
    level = 0
    for char in paren_string:
        if char == '(':
            level += 1
        elif char == ')':
            nested_levels.append(level)
            level -= 1
    return nested_levels