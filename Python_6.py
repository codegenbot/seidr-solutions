def parse_nested_parens(paren_string: str) -> List[int]:
    return [max([c.count("(") for c in s.split(" ")]) - 1 for s in paren_string.split()]