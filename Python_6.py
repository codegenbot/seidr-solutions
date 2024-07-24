from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(1)
        elif char == ")":
            while len(stack) and stack.pop() != 1:
                result.append(-1)
            if not stack:
                result.append(len(result) + 1)
            else:
                result.append(len(stack))
    return result