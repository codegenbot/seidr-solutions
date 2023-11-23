def parse_nested_parens(paren_string: str) -> List[int]:
    return [paren_string.count(')' * i) for i in range(1, max(paren_string.count(')') + 1, 2))]