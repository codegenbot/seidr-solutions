def parse_nested_parens(paren_string: str) -> list[int]:
    return [level for group in paren_string.split() for level, _ in enumerate(group)]