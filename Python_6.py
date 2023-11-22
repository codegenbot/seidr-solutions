from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    stack = []
    result = []
    for char in paren_string:
        if char == "(":
            stack.append("(")
        elif char == ")":
            if stack:
                stack.pop()
            else:
                result.append(-1)
    result.extend([1] * len(stack))
    return result