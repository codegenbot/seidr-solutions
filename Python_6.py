def parse_nested_parens(paren_string: str) -> List[int]:
    return [max(map(len, s.split("("))) for s in paren_string.split()]