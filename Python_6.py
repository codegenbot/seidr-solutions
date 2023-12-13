def parse_nested_parens(paren_string: str) -> List[int]:
    return [paren_string[:i].count('(') for i in range(len(paren_string))]