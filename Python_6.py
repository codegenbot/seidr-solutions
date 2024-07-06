def parse_nested_parens(paren_string: str) -> list[int]:
    result = []
    for group in paren_string.split():
        levels = [level for level, _ in enumerate(group)]
        result.extend(levels)
    return result