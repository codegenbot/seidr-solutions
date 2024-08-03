from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    max_count = 0
    curr_count = 0

    for char in paren_string:
        if char == "(":
            curr_count += 1
            max_count = max(max_count, curr_count)
        elif char == ")":
            curr_count = 0

    return [max_count]