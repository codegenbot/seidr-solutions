def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(len(paren) // 2 for paren in group.split("("))
        for group in paren_string.split()
    ]