def parse_nested_parens(paren_string: str) -> list[int]:
    return [paren.count('()') for paren in paren_string.split()]