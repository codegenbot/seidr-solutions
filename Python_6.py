from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    return [max([s.count('(' * i) for i in range(1, len(s) // 2 + 1)]) // 2 for s in paren_string.split()]