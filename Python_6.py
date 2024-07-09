def parse_nested_parens(paren_string: str) -> List[int]:
    return [max([paren_string.count('(' * i) for i in range(1, len(paren_str) // 2 + 1)]) // 2 for paren_str in paren_string.split()]