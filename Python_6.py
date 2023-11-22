from typing import List

def parse_nested_parens(paren_strings: List[str]) -> List[int]:
    def count_nested_parens(paren_string: str) -> int:
        count = 0
        max_count = 0
        for char in paren_string:
            if char == '(':
                count += 1
            elif char == ')':
                count -= 1
            max_count = max(max_count, count)
        return max_count

    return [count_nested_parens(paren) for paren in paren_strings]