def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for group in paren_string.split():
        level = 0
        for char in group:
            if char == '(':
                level += 1
            elif char == ')':
                level -= 1
            else:
                raise ValueError("Invalid character")
        result.append(level)
    return result