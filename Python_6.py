```
from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    count = 0
    for char in paren_string:
        if char == "(":
            count = 0
        elif char == ")":
            stack.pop()
            count -= 1
            if not stack:
                result.append(count)
        count += (char == "(") - (char == ")")
        stack.append(char == "(")
    return result