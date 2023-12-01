from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return [max([0] + [paren_string.count('()' * i) for i in range(1, paren_string.count('()') + 1)])]