def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([paren_string.count("(") // 2 for _ in range(i + 1)])
        for i in map(len, paren_string.split())
    ]