def parse_nested_parens(paren_string: str) -> List[int]:
    nested_parens = []
    count = 0

    for char in paren_string:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        nested_parens.append(abs(count))

    return nested_parens