def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([c for c in s if c == "("], default="", key=lambda x: -x.count("(")).count(
            "("
        )
        for s in paren_string.split()
    ]