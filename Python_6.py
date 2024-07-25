def parse_nested_parens(paren_string: str) -> int:
    result = 0
    level = 0
    for char in paren_string:
        if char == '(':
            level += 1
        elif char == ')':
            level -= 1
        if level > result:
            result = level
    return result