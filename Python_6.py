def parse_nested_parens(paren_string: str) -> List[int]:
    return [paren_string.count('(') - paren_string.replace('(', '').rfind(')') for paren_string in paren_string.split()]