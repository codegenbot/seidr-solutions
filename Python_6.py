def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([i for i, c in enumerate(paren_string) if c == "("])
        - min([i for i, c in enumerate(paren_string) if c == ")"])
    ]