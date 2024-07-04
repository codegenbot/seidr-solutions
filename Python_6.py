from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    def max_depth(s: str) -> int:
        depth = max_depth = 0
        for char in s:
            if (char == "("):
                depth += 1
                if depth > max_depth:
                    max_depth = depth
            elif char == ")":
                depth -= 1
        return max_depth

    return [max_depth(group) for group in paren_string.split()]