def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == '(':
            if level > 0:
                result.append(level)
            level += 1
        elif char == ')':
            level -= 1
    return [level] + result