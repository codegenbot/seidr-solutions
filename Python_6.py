def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    temp_level = 0
    for char in paren_string:
        if char == '(':
            temp_level += 1
            level = max(level, temp_level)
        elif char == ')':
            temp_level -= 1
            level = max(level, temp_level)
    return [level]