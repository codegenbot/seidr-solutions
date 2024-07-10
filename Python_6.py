def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(len(s) // 2 for s in group.split("(") if s)
        for group in paren_string.split()
    ]