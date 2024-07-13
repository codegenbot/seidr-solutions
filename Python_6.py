def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([paren_string.count("(") - paren_string.find("(") - 1, 0])
        for paren_string in paren_string.split()
    ]