from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            result.append(len(stack))
            stack.pop()
    return result