def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([parens.count("(") for parens in group.split()])
        for group in paren_string.split()
    ]