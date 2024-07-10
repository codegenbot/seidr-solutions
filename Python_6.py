def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([nested.count("(") for nested in group.split(" ")])
        for group in paren_string.split()
    ]