def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([i for i, char in enumerate(paren_string) if char == "("])
        - min([i for i, char in enumerate(paren_string) if char == "("])
        + 1
        for paren_string in paren_string.split()
    ]