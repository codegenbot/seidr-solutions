from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    nesting = 0
    for char in paren_string:
        if char == "(":
            nesting += 1
        elif char == ")":
            nesting -= 1
    result.append(nesting)
    return result