def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    levels = 0
    for char in paren_string:
        if char == '(':
            levels += 1
        elif char == ')':
            levels -= 1
        if levels > 0:
            result.append(levels)
    return result