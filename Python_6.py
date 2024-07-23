```
from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == "(":
            level += 1
            result.append(level)
        elif char == ")":
            level -= 1
            while level < 0:
                level += 1
                result.pop()
    return [i for i in result if i > 0]