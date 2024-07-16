from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    for s in paren_string:
        result.append(max([s.count('(' * i) for i in range(1, len(s) // 2 + 1)]) // 2)
    return result