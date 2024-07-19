def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([len(x) for x in group.split("(") if x]) for group in paren_string.split()
    ]