def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([(c.count("(") - c.count(")")) // 2 for c in group.split(" ")])
        for group in paren_string.split()
    ]