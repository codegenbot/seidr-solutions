```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    def count_nesting(s: str) -> int:
        nesting = 0
        max_nesting = 0
        for c in s:
            if c == '(':
                nesting += 1
                max_nesting = max(max_nesting, nesting)
            elif c == ')':
                nesting -= 1
        return max_nesting

    result = [count_nesting(group) for group in paren_string.split()]
    return result