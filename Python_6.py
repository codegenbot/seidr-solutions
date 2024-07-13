def parse_nested_parens(paren_string: str) -> List[int]:
    return [max([len(s) for s in group.split("()")]) for group in paren_string.split()]