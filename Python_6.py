def parse_nested_parens(paren_string: str) -> list[int]:
    return [
        max([c for c in s if c == "("], default="").count("(")
        for s in paren_string.split()
    ]