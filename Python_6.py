from typing import List

def parse_nested_parens(paren_strings: str) -> List[int]:
    return [max(paren_strings.count('(' * j) for j in range(1, len(paren_strings) // 2 + 1))
            for paren_string in paren_strings.split()]