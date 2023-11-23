def parse_nested_parens(paren_string: str) -> List[int]:
    nested_levels = []
    count = 0
    for char in paren_string:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        if char == ' ':
            nested_levels.append(count)
    return nested_levels