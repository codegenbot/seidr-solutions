def parse_nested_parens(paren_string: str) -> List[int]:
    return [paren_string.count("(") - 1 for paren_string in paren_string.split()]