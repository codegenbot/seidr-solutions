def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    level = 0
    for group in paren_string.split():
        for char in group:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
                if level == 0:
                    result.append(level)
    return result