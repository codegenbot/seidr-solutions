def parse_nested_parens(paren_string: str) -> List[int]:
    levels = []
    count = 0
    for char in paren_string:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        elif char == ' ':
            levels.append(count)
    return levels