def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(
            reduce(lambda acc, c: acc + 1 if c == "(" else acc - 1, s, 0)
            for s in group.split()
        )
        for group in paren_string.split()
    ]