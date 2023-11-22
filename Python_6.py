import typing

def parse_nested_parens(paren_string: str) -> typing.List[int]:
    return [paren.count('(') - paren.count(')') for paren in paren_string.split()]