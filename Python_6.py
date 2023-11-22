from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    depths = []
    depth = 0
    for paren in paren_string:
        if paren == "(":
            depth += 1
        elif paren == ")":
            depth -= 1
        depths.append(depth)
    return depths