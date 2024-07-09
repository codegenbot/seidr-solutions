from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    return [max([s.count("(") for s in group]) for group in paren_string.split()]