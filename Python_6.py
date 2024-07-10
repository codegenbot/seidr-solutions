def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([n.count("(") for n in group.split("(") if n])
        for group in paren_string.split()
    ]