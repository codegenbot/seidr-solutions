def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max([len(group) // 2 for group in groups.split("()")])
        for groups in paren_string.split()
    ]