def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([x.count("(") for x in group.split(" ")]) for group in paren_string.split()
    ]