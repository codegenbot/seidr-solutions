from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return [sum(paren.count('(') - paren.count(')')) for paren in paren_string.split()]