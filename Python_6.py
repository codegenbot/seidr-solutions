def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    indices = []
    for i, char in enumerate(paren_string):
        if char == '(':
            indices.append(i)
        elif char == ')':
            result.append(indices.pop())
    while indices: result.append(indices.pop())
    return result