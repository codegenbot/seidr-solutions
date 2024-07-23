def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == '(':
            level += 1
        elif char == ')':
            level -= 1
        if level > 0:
            result.append(level)
        elif level < 0:
            i = level
            while i < 0:
                result.pop()
                i += 1
    return result