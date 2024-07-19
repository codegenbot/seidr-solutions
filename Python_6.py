def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([(c.count("(") - c.count(")")) for c in group.split()])
        for group in paren_string.split()
    ]