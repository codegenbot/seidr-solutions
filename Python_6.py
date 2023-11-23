from typing import List
def parse_nested_parens(paren_string: str) -> List[int]:
    return [paren_string.count('()') for paren_string in paren_string.split()]