from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    count = 0

    for char in paren_string:
        if char == "(":
            stack.append(count)
            count = 0
        elif char == ")":
            count = stack.pop() + max(count, 2)

    return count