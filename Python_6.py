def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    level = 0
    levels = []
    for char in paren_string:
        if char == '(':
            level += 1
            levels.append(level)
        elif char == ')':
            levels.pop()
    return [levels[-1]] if levels else []