from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(
            [
                sum([1 for char in paren_string if char == "("][:i])
                for i in range(1, paren_string.count("(") + 1)
            ]
        )
        for paren_string in paren_string.split()
    ]