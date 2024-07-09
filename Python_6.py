def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max((x.count("(") for x in item.split(")")), default=0)
        for item in paren_string.split()
    ]