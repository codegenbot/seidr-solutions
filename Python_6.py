```
from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for i, char in enumerate(paren_string):
        if char == "(":
            stack.append(i)
        elif char == ")":
            if not stack:
                result.append(len(result))
            else:
                last_open = stack.pop()
                if len(stack):
                    result.append(i - last_open - 1)
                else:
                    result.append(-1)
    return result