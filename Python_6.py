def parse_nested_parens(paren_string: str) -> List[int]:
    return [max([paren_string.count("(")] + [-1 * paren_string[::-1].find(")")])]