def parse_nested_parens(paren_string: str) -> List[int]:
    return [max([paren_string.count('(')] + [-paren_string.find(')') for _ in range(paren_string.count(')'))])]