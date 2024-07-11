from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    def nested_depth(parens: str) -> int:
        depth = 0
        for paren in parens:
            if paren == "(":
                depth += 1
            elif paren == ")":
                depth -= 1
        return depth

    return [nested_depth(group) for group in paren_string.split()]