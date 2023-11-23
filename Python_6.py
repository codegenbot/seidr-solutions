def parse_nested_parens(paren_string: str) -> List[int]:
    count = 0
    max_count = 0
    result = []
    for char in paren_string:
        if char == '(':
            count += 1
            max_count = max(max_count, count)
        elif char == ')':
            count -= 1
        elif char == ' ':
            result.append(max_count)
            max_count = 0
    result.append(max_count)
    return result