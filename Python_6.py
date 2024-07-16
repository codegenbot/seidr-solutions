def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([c for p in s for c in range(p.count("(") // 2)])
        for s in paren_string.split()
    ]